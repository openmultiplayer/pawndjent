from model import CPPArgument, CPPFunction


class FunctionHeuristic:
    def apply(self, function, arguments):
        pass


class IntHeuristic(FunctionHeuristic):
    def apply(self, function, arguments):
        if(
            function.name.startswith('Get')
            and not any(
                (
                    getattr(argument, 'type', None) == 'std::string'
                    and not argument.is_const
                ) or (
                    getattr(argument, 'type', None) == 'float'
                    and argument.is_reference
                ) or (
                    getattr(argument, 'type', None) == 'VehicleParams'
                    and argument.is_reference
                ) or (
                    getattr(argument, 'tag', None) == '_'
                    and argument.is_reference
                )
                for argument in arguments
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
