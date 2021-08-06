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


all_heuristics = [
    PlayerHeuristic(),
    ActorHeuristic(),
]
