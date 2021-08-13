import json
import textwrap

import pytest

from model import Function


def dedent_strip(text):
    return textwrap.dedent(text).strip()


cases = [
    (json.loads(json_str.rstrip(',\n ')), dedent_strip(output_str))
    for json_str, output_str in (
        (
            '''
                {
                    "name": "SetPlayerDrunkLevel",
                    "tag": "_",
                    "is_callback": false,
                    "is_variadic": false,
                    "arguments": [
                        {
                            "name": "playerid",
                            "tag": "_",
                            "is_const": false,
                            "is_array": false,
                            "default_value": null,
                            "is_reference": false
                        },
                        {
                            "name": "level",
                            "tag": "_",
                            "is_const": false,
                            "is_array": false,
                            "default_value": null,
                            "is_reference": false
                        }
                    ]
                },
            ''',
            '''
                SCRIPT_API(SetPlayerDrunkLevel, bool(IPlayer& player, int level))
                {
                    throw NotImplemented();
                }
            ''',
        ),
        (
            '''
                {
                    "name": "SendDeathMessage",
                    "tag": "_",
                    "is_callback": false,
                    "is_variadic": false,
                    "arguments": [
                        {
                            "name": "killer",
                            "tag": "_",
                            "is_const": false,
                            "is_array": false,
                            "default_value": null,
                            "is_reference": false
                        },
                        {
                            "name": "killee",
                            "tag": "_",
                            "is_const": false,
                            "is_array": false,
                            "default_value": null,
                            "is_reference": false
                        },
                        {
                            "name": "weapon",
                            "tag": "_",
                            "is_const": false,
                            "is_array": false,
                            "default_value": null,
                            "is_reference": false
                        }
                    ]
                },
            ''',
            '''
                SCRIPT_API(SendDeathMessage, bool(IPlayer* killer, IPlayer& killee, int weapon))
                {
                    throw NotImplemented();
                }
            ''',
        ),
        (
            '''
                {
                    "name": "PlayAudioStreamForPlayer",
                    "tag": "_",
                    "is_callback": false,
                    "is_variadic": false,
                    "arguments": [
                        {
                            "name": "playerid",
                            "tag": "_",
                            "is_const": false,
                            "is_array": false,
                            "default_value": null,
                            "is_reference": false
                        },
                        {
                            "name": "url",
                            "tag": "_",
                            "is_const": true,
                            "is_array": true,
                            "default_value": null,
                            "is_reference": false
                        },
                        {
                            "name": "posX",
                            "tag": "Float",
                            "is_const": false,
                            "is_array": false,
                            "default_value": 0.0,
                            "is_reference": false
                        },
                        {
                            "name": "posY",
                            "tag": "Float",
                            "is_const": false,
                            "is_array": false,
                            "default_value": 0.0,
                            "is_reference": false
                        },
                        {
                            "name": "posZ",
                            "tag": "Float",
                            "is_const": false,
                            "is_array": false,
                            "default_value": 0.0,
                            "is_reference": false
                        },
                        {
                            "name": "distance",
                            "tag": "Float",
                            "is_const": false,
                            "is_array": false,
                            "default_value": 50.0,
                            "is_reference": false
                        },
                        {
                            "name": "usepos",
                            "tag": "_",
                            "is_const": false,
                            "is_array": false,
                            "default_value": 0,
                            "is_reference": false
                        }
                    ]
                },
            ''',
            '''
                SCRIPT_API(PlayAudioStreamForPlayer, bool(IPlayer& player, std::string const& url, Vector3 pos, float distance, bool usePos))
                {
                    throw NotImplemented();
                }
            ''',
        ),
        (
            '''
                {
                    "name": "SetPlayerHealth",
                    "tag": "_",
                    "is_callback": false,
                    "is_variadic": false,
                    "arguments": [
                        {
                            "name": "playerid",
                            "tag": "_",
                            "is_const": false,
                            "is_array": false,
                            "default_value": null,
                            "is_reference": false
                        },
                        {
                            "name": "health",
                            "tag": "Float",
                            "is_const": false,
                            "is_array": false,
                            "default_value": null,
                            "is_reference": false
                        }
                    ]
                },
            ''',
            '''
                SCRIPT_API(SetPlayerHealth, bool(IPlayer& player, float health))
                {
                    throw NotImplemented();
                }
            ''',
        ),
        (
            '''
                {
                    "name": "GetPlayerHealth",
                    "tag": "_",
                    "is_callback": false,
                    "is_variadic": false,
                    "arguments": [
                        {
                            "name": "playerid",
                            "tag": "_",
                            "is_const": false,
                            "is_array": false,
                            "default_value": null,
                            "is_reference": false
                        },
                        {
                            "name": "health",
                            "tag": "Float",
                            "is_const": false,
                            "is_array": false,
                            "default_value": null,
                            "is_reference": true
                        }
                    ]
                },
            ''',
            '''
                SCRIPT_API(GetPlayerHealth, bool(IPlayer& player, float& health))
                {
                    throw NotImplemented();
                }
            ''',
        ),
        (
            '''
                {
                    "name": "GetPlayerName",
                    "tag": "_",
                    "is_callback": false,
                    "is_variadic": false,
                    "arguments": [
                        {
                            "name": "playerid",
                            "tag": "_",
                            "is_const": false,
                            "is_array": false,
                            "default_value": null,
                            "is_reference": false
                        },
                        {
                            "name": "name",
                            "tag": "_",
                            "is_const": false,
                            "is_array": true,
                            "default_value": null,
                            "is_reference": true
                        },
                        {
                            "name": "len",
                            "tag": "_",
                            "is_const": false,
                            "is_array": false,
                            "default_value": "sizeof name",
                            "is_reference": false
                        }
                    ]
                },
            ''',
            '''
                SCRIPT_API(GetPlayerName, bool(IPlayer& player, std::string& name))
                {
                    throw NotImplemented();
                }
            ''',
        ),
        (
            '''
                {
                    "name": "CreatePlayerTextDraw",
                    "tag": "PlayerText",
                    "is_callback": false,
                    "is_variadic": false,
                    "arguments": [
                        {
                            "name": "playerid",
                            "tag": "_",
                            "is_const": false,
                            "is_array": false,
                            "default_value": null,
                            "is_reference": false
                        },
                        {
                            "name": "x",
                            "tag": "Float",
                            "is_const": false,
                            "is_array": false,
                            "default_value": null,
                            "is_reference": false
                        },
                        {
                            "name": "y",
                            "tag": "Float",
                            "is_const": false,
                            "is_array": false,
                            "default_value": null,
                            "is_reference": false
                        },
                        {
                            "name": "text",
                            "tag": "_",
                            "is_const": true,
                            "is_array": true,
                            "default_value": null,
                            "is_reference": false
                        }
                    ]
                },
            ''',
            '''
                SCRIPT_API(CreatePlayerTextDraw, int(IPlayer& player, Vector2 pos, std::string const& text))
                {
                    throw NotImplemented();
                }
            ''',
        ),
        (
            '''
                {
                    "name": "PlayerTextDrawDestroy",
                    "tag": "_",
                    "is_callback": false,
                    "is_variadic": false,
                    "arguments": [
                        {
                            "name": "playerid",
                            "tag": "_",
                            "is_const": false,
                            "is_array": false,
                            "default_value": null,
                            "is_reference": false
                        },
                        {
                            "name": "text",
                            "tag": "PlayerText",
                            "is_const": false,
                            "is_array": false,
                            "default_value": null,
                            "is_reference": false
                        }
                    ]
                },
            ''',
            '''
                SCRIPT_API(PlayerTextDrawDestroy, bool(IPlayer& player, IPlayerTextDraw& text))
                {
                    throw NotImplemented();
                }
            ''',
        ),
        (
            '''
                {
                    "name": "TextDrawDestroy",
                    "tag": "_",
                    "is_callback": false,
                    "is_variadic": false,
                    "arguments": [
                        {
                            "name": "text",
                            "tag": "Text",
                            "is_const": false,
                            "is_array": false,
                            "default_value": null,
                            "is_reference": false
                        }
                    ]
                },
            ''',
            '''
                SCRIPT_API(TextDrawDestroy, bool(ITextDraw& text))
                {
                    throw NotImplemented();
                }
            ''',
        ),
        (
            '''
                {
                    "name": "GetPlayerTeam",
                    "tag": "_",
                    "is_callback": false,
                    "is_variadic": false,
                    "arguments": [
                        {
                            "name": "playerid",
                            "tag": "_",
                            "is_const": false,
                            "is_array": false,
                            "default_value": null,
                            "is_reference": false
                        }
                    ]
                },
            ''',
            '''
                SCRIPT_API(GetPlayerTeam, int(IPlayer& player))
                {
                    throw NotImplemented();
                }
            ''',
        ),
        (
            '''
                {
                    "name": "GetPlayerKeys",
                    "tag": "_",
                    "is_callback": false,
                    "is_variadic": false,
                    "arguments": [
                        {
                            "name": "playerid",
                            "tag": "_",
                            "is_const": false,
                            "is_array": false,
                            "default_value": null,
                            "is_reference": false
                        },
                        {
                            "name": "keys",
                            "tag": "_",
                            "is_const": false,
                            "is_array": false,
                            "default_value": null,
                            "is_reference": true
                        },
                        {
                            "name": "updown",
                            "tag": "_",
                            "is_const": false,
                            "is_array": false,
                            "default_value": null,
                            "is_reference": true
                        },
                        {
                            "name": "leftright",
                            "tag": "_",
                            "is_const": false,
                            "is_array": false,
                            "default_value": null,
                            "is_reference": true
                        }
                    ]
                },
            ''',
            '''
                SCRIPT_API(GetPlayerKeys, bool(IPlayer& player, int& keys, int& updown, int& leftright))
                {
                    throw NotImplemented();
                }
            ''',
        ),
        (
            '''
                {
                    "name": "GetVehicleParamsEx",
                    "tag": "_",
                    "is_callback": false,
                    "is_variadic": false,
                    "arguments": [
                        {
                            "name": "vehicleid",
                            "tag": "_",
                            "is_const": false,
                            "is_array": false,
                            "default_value": null,
                            "is_reference": false
                        },
                        {
                            "name": "engine",
                            "tag": "VEHICLE_PARAMS",
                            "is_const": false,
                            "is_array": false,
                            "default_value": null,
                            "is_reference": true
                        },
                        {
                            "name": "lights",
                            "tag": "VEHICLE_PARAMS",
                            "is_const": false,
                            "is_array": false,
                            "default_value": null,
                            "is_reference": true
                        },
                        {
                            "name": "alarm",
                            "tag": "VEHICLE_PARAMS",
                            "is_const": false,
                            "is_array": false,
                            "default_value": null,
                            "is_reference": true
                        },
                        {
                            "name": "doors",
                            "tag": "VEHICLE_PARAMS",
                            "is_const": false,
                            "is_array": false,
                            "default_value": null,
                            "is_reference": true
                        },
                        {
                            "name": "bonnet",
                            "tag": "VEHICLE_PARAMS",
                            "is_const": false,
                            "is_array": false,
                            "default_value": null,
                            "is_reference": true
                        },
                        {
                            "name": "boot",
                            "tag": "VEHICLE_PARAMS",
                            "is_const": false,
                            "is_array": false,
                            "default_value": null,
                            "is_reference": true
                        },
                        {
                            "name": "objective",
                            "tag": "VEHICLE_PARAMS",
                            "is_const": false,
                            "is_array": false,
                            "default_value": null,
                            "is_reference": true
                        }
                    ]
                },
            ''',
            '''
                SCRIPT_API(GetVehicleParamsEx, bool(IVehicle& vehicle, VehicleParams& params))
                {
                    throw NotImplemented();
                }
            ''',
        ),
        (
            '''
                {
                    "name": "IsVehicleStreamedIn",
                    "tag": "_",
                    "is_callback": false,
                    "is_variadic": false,
                    "arguments": [
                        {
                            "name": "vehicleid",
                            "tag": "_",
                            "is_const": false,
                            "is_array": false,
                            "default_value": null,
                            "is_reference": false
                        },
                        {
                            "name": "forplayerid",
                            "tag": "_",
                            "is_const": false,
                            "is_array": false,
                            "default_value": null,
                            "is_reference": false
                        }
                    ]
                },
            ''',
            '''
                SCRIPT_API(IsVehicleStreamedIn, bool(IVehicle& vehicle, IPlayer const& forplayer))
                {
                    throw NotImplemented();
                }
            ''',
        ),
        (
            '''
                {
                    "name": "SetVehicleParamsEx",
                    "tag": "_",
                    "is_callback": false,
                    "is_variadic": false,
                    "arguments": [
                        {
                            "name": "vehicleid",
                            "tag": "_",
                            "is_const": false,
                            "is_array": false,
                            "default_value": null,
                            "is_reference": false
                        },
                        {
                            "name": "engine",
                            "tag": "VEHICLE_PARAMS",
                            "is_const": false,
                            "is_array": false,
                            "default_value": null,
                            "is_reference": false
                        },
                        {
                            "name": "lights",
                            "tag": "VEHICLE_PARAMS",
                            "is_const": false,
                            "is_array": false,
                            "default_value": null,
                            "is_reference": false
                        },
                        {
                            "name": "alarm",
                            "tag": "VEHICLE_PARAMS",
                            "is_const": false,
                            "is_array": false,
                            "default_value": null,
                            "is_reference": false
                        },
                        {
                            "name": "doors",
                            "tag": "VEHICLE_PARAMS",
                            "is_const": false,
                            "is_array": false,
                            "default_value": null,
                            "is_reference": false
                        },
                        {
                            "name": "bonnet",
                            "tag": "VEHICLE_PARAMS",
                            "is_const": false,
                            "is_array": false,
                            "default_value": null,
                            "is_reference": false
                        },
                        {
                            "name": "boot",
                            "tag": "VEHICLE_PARAMS",
                            "is_const": false,
                            "is_array": false,
                            "default_value": null,
                            "is_reference": false
                        },
                        {
                            "name": "objective",
                            "tag": "VEHICLE_PARAMS",
                            "is_const": false,
                            "is_array": false,
                            "default_value": null,
                            "is_reference": false
                        }
                    ]
                },
            ''',
            '''
                SCRIPT_API(SetVehicleParamsEx, bool(IVehicle& vehicle, VehicleParams params))
                {
                    throw NotImplemented();
                }
            ''',
        ),
        (
            '''
                {
                    "name": "GetPlayerPos",
                    "tag": "_",
                    "is_callback": false,
                    "is_variadic": false,
                    "arguments": [
                        {
                            "name": "playerid",
                            "tag": "_",
                            "is_const": false,
                            "is_array": false,
                            "default_value": null,
                            "is_reference": false
                        },
                        {
                            "name": "x",
                            "tag": "Float",
                            "is_const": false,
                            "is_array": false,
                            "default_value": null,
                            "is_reference": true
                        },
                        {
                            "name": "y",
                            "tag": "Float",
                            "is_const": false,
                            "is_array": false,
                            "default_value": null,
                            "is_reference": true
                        },
                        {
                            "name": "z",
                            "tag": "Float",
                            "is_const": false,
                            "is_array": false,
                            "default_value": null,
                            "is_reference": true
                        }
                    ]
                },
            ''',
            '''
                SCRIPT_API(GetPlayerPos, bool(IPlayer& player, Vector3& pos))
                {
                    throw NotImplemented();
                }
            ''',
        ),
        (
            '''
                {
                    "name": "IsActorStreamedIn",
                    "tag": "bool",
                    "is_callback": false,
                    "is_variadic": false,
                    "arguments": [
                        {
                            "name": "actorid",
                            "tag": "_",
                            "is_const": false,
                            "is_array": false,
                            "default_value": null,
                            "is_reference": false
                        },
                        {
                            "name": "playerid",
                            "tag": "_",
                            "is_const": false,
                            "is_array": false,
                            "default_value": null,
                            "is_reference": false
                        }
                    ]
                },
            ''',
            '''
                SCRIPT_API(IsActorStreamedIn, bool(IActor& actor, IPlayer& player))
                {
                    throw NotImplemented();
                }
            ''',
        ),
    )
]


@pytest.mark.parametrize('input_dict, output_str', cases)
def test_stubs(input_dict, output_str):
    assert Function.from_dict(input_dict).generate_stub() == output_str
