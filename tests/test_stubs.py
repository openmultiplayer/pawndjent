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
    )
]


@pytest.mark.parametrize('input_dict, output_str', cases)
def test_stubs(input_dict, output_str):
    assert Function.from_dict(input_dict).generate_stub() == output_str
