from . import argument, function

argument_heuristics = (
    argument.PlayerHeuristic(),
    argument.ActorHeuristic(),
    argument.VehicleHeuristic(),
    argument.VehicleParamsHeuristic(),
    argument.BoolHeuristic(),
    argument.StringHeuristic(),
    argument.StrLenHeuristic(),
    argument.Vector3Heuristic(),
    argument.Vector2Heuristic(),
    # Needs to be last for the Vector heuristics to work
    argument.FloatHeuristic(),
)

function_heuristics = (
    function.IntHeuristic(),
)
