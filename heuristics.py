from model import CPPArgument


class Heuristic:
    def apply(self, arguments):
        return_value = arguments.copy()

        for index, argument in enumerate(return_value[:]):
            return_value[index] = self.apply_single(argument)

        return return_value

    def apply_single(self, argument):
        return argument


class SingleArgumentHeuristic(Heuristic):
    def apply_single(self, argument):
        if hasattr(argument, 'type'):
            # CPPArgument - already processed
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
        'killerid': CPPArgument('killer', 'IPlayer', is_pointer=True),
    }


class ActorHeuristic(SingleArgumentHeuristic):
    argument_names_to_types = {
        'actorid': CPPArgument('actor', 'IActor', is_reference=True),
    }


class Vector3Heuristic(Heuristic):
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
                    # CPPArguments - already processed
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


all_heuristics = [
    PlayerHeuristic(),
    ActorHeuristic(),
    Vector3Heuristic(),
]
