from model import CPPArgument, CPPFunction


class FunctionHeuristic:
    def apply(self, function, arguments):
        pass


class IntHeuristic(FunctionHeuristic):
    non_matches = {
        'not_const': {
            'type': (
                'std::string',
            ),
        },
        'reference': {
            'type': (
                'int',
                'bool',
                'float',
                'Vector2',
                'Vector3',
            ),
            'tag': (
                '_',
                'VEHICLE_PARAMS',
            ),
        },
    }

    def apply(self, function, arguments):
        if(
            function.name.startswith('Get')
            and function.tag not in ('Float', 'bool')
            and not (
                any(
                    (
                        getattr(argument, key, None) == value
                        and not argument.is_const
                    )
                    for key, values in self.non_matches['not_const'].items()
                    for value in values
                    for argument in arguments
                ) or any(
                    (
                        getattr(argument, key, None) == value
                        and argument.is_reference
                    )
                    for key, values in self.non_matches['reference'].items()
                    for value in values
                    for argument in arguments
                )
            )
        ):
            return CPPFunction(
                name=function.name,
                type='int',
                arguments=[
                    CPPArgument.from_argument(argument)
                    for argument in arguments
                ],
            )

        return super().apply(function, arguments)
