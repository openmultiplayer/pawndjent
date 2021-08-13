from model import CPPArgument


class ArgumentHeuristic:
    def apply(self, arguments):
        return_value = arguments.copy()

        for index, argument in enumerate(return_value[:]):
            return_value[index] = self.apply_single(argument)

        return return_value

    def apply_single(self, argument):
        return argument


class SingleArgumentHeuristic(ArgumentHeuristic):
    def apply_single(self, argument):
        if hasattr(argument, 'type'):
            return super().apply_single(argument)

        if(
            argument.tag == '_'
            and argument.name in self.argument_names_to_types
        ):
            return self.argument_names_to_types[argument.name]

        return super().apply_single(argument)


class PlayerHeuristic(SingleArgumentHeuristic):
    argument_names_to_types = {
        'playerid': CPPArgument('player', 'IPlayer', is_reference=True),
        'killer': CPPArgument('killer', 'IPlayer', is_pointer=True),
        'killee': CPPArgument('killee', 'IPlayer', is_reference=True),
        'forplayerid': CPPArgument(
            'forplayer',
            'IPlayer',
            is_reference=True,
            is_const=True,
        ),
    }


class ActorHeuristic(SingleArgumentHeuristic):
    argument_names_to_types = {
        'actorid': CPPArgument('actor', 'IActor', is_reference=True),
    }


class VehicleHeuristic(SingleArgumentHeuristic):
    argument_names_to_types = {
        'vehicleid': CPPArgument('vehicle', 'IVehicle', is_reference=True),
    }


class BoolHeuristic(SingleArgumentHeuristic):
    argument_names_to_types = {
        'usepos': CPPArgument('usePos', 'bool'),
    }


class FloatHeuristic(ArgumentHeuristic):
    def apply_single(self, argument):
        if hasattr(argument, 'type'):
            return super().apply_single(argument)

        if argument.tag == 'Float':
            name = argument.name

            if(
                name.startswith('f')
                and not name.startswith('float')
            ):
                name = name[1:]

            return CPPArgument(
                name,
                'float',
                is_reference=argument.is_reference,
            )

        return super().apply_single(argument)


class StringHeuristic(ArgumentHeuristic):
    def apply_single(self, argument):
        if hasattr(argument, 'type'):
            return super().apply_single(argument)

        if(
            argument.is_array
            and argument.tag == '_'
        ):
            return CPPArgument(
                argument.name,
                'std::string',
                is_reference=True,
                is_const=not argument.is_reference,
            )

        return super().apply_single(argument)


class StrLenHeuristic(ArgumentHeuristic):
    def apply(self, arguments):
        return_value = arguments.copy()

        while True:
            for index, (string, length) in enumerate(zip(
                return_value,
                return_value[1:],
            )):
                if(
                    hasattr(string, 'type')
                    and not string.is_const
                    and hasattr(length, 'tag')
                    and length.tag == '_'
                    and length.default_value == f'sizeof {string.name}'
                ):
                    del return_value[index + 1]
                    break
            else:
                return return_value


class Vector2Heuristic(ArgumentHeuristic):
    def autogenerate_name(self, x, y):
        names = [x.name, y.name]

        if all(name.startswith('f') for name in names):
            names = [name[1:] for name in names]

        for index, letter in enumerate(('x', 'y')):
            if names[index].endswith((letter, letter.upper())):
                names[index] = names[index][:-1]

        if not any(names):
            return 'pos'  # Default

        if all(name == names[0] for name in names):
            return names[0].lower()

        raise ValueError(
            f'Unable to determine name for {x}, {y}: found {names}'
        )

    def apply(self, arguments):
        if len(arguments) < 2:
            return arguments

        return_value = arguments.copy()

        while True:
            for index, (x, y) in enumerate(zip(
                return_value,
                return_value[1:],
            )):
                if any(
                    hasattr(argument, 'type')
                    for argument in (x, y)
                ):
                    continue

                if(
                    x.tag == 'Float'
                    and y.tag == 'Float'
                    and 'x' in x.name.lower()
                    and 'y' in y.name.lower()
                ):
                    name = self.autogenerate_name(x, y)
                    return_value[index:index + 2] = [CPPArgument(
                        name,
                        'Vector2',
                        is_reference=any(
                            argument.is_reference
                            for argument in (x, y)
                        ),
                    )]
                    break
            else:
                return return_value


class Vector3Heuristic(ArgumentHeuristic):
    def autogenerate_name(self, x, y, z):
        names = [x.name, y.name, z.name]

        if all(name.startswith('f') for name in names):
            names = [name[1:] for name in names]

        for index, letter in enumerate(('x', 'y', 'z')):
            if names[index].endswith((letter, letter.upper())):
                names[index] = names[index][:-1]

        if not any(names):
            return 'pos'  # Default

        if all(name == names[0] for name in names):
            return names[0].lower()

        raise ValueError(
            f'Unable to determine name for {x}, {y}, {z}: found {names}'
        )

    def apply(self, arguments):
        if len(arguments) < 3:
            return arguments

        return_value = arguments.copy()

        while True:
            for index, (x, y, z) in enumerate(zip(
                return_value,
                return_value[1:],
                return_value[2:],
            )):
                if any(
                    hasattr(argument, 'type')
                    for argument in (x, y, z)
                ):
                    continue

                if(
                    x.tag == 'Float'
                    and y.tag == 'Float'
                    and z.tag == 'Float'
                    and 'x' in x.name.lower()
                    and 'y' in y.name.lower()
                    and 'z' in z.name.lower()
                ):
                    name = self.autogenerate_name(x, y, z)
                    return_value[index:index + 3] = [CPPArgument(
                        name,
                        'Vector3',
                        is_reference=any(
                            argument.is_reference
                            for argument in (x, y, z)
                        ),
                    )]
                    break
            else:
                return return_value


class VehicleParamsHeuristic(ArgumentHeuristic):
    param_names = (
        'engine',
        'lights',
        'alarm',
        'doors',
        'bonnet',
        'boot',
        'objective',
    )

    def apply(self, arguments):
        if len(arguments) < 7:
            return arguments

        return_value = arguments.copy()

        while True:
            for index, params in enumerate(zip(*[
                return_value[index:]
                for index in range(7)
            ])):
                if any(
                    hasattr(argument, 'type')
                    for argument in params
                ):
                    continue

                if all(
                    argument.tag == '_'
                    and argument.is_reference
                    and argument.name == name
                    for argument, name in zip(
                        params,
                        self.param_names,
                    )
                ):
                    return_value[index:index + 7] = [CPPArgument(
                        'params',
                        'VehicleParams',
                        is_reference=any(
                            argument.is_reference
                            for argument in params
                        ),
                    )]
                    break
            else:
                return return_value
