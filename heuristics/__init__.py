from . import argument

argument_heuristics = (
    argument.PlayerHeuristic(),
    argument.ActorHeuristic(),
    argument.BoolHeuristic(),
    argument.StringHeuristic(),
    argument.StrLenHeuristic(),
    argument.Vector3Heuristic(),
    argument.Vector2Heuristic(),
    # Needs to be last for the Vector heuristics to work
    argument.FloatHeuristic(),
)
