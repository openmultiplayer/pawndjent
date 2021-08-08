import json
import textwrap

import pytest

from model import Function


def dedent_strip(text):
    return textwrap.dedent(text).strip()


cases = (
    (
        json.loads('''{
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
        }'''),
        dedent_strip('''
            SCRIPT_API(SetPlayerDrunkLevel, bool(IPlayer& player, int level))
            {
                throw NotImplemented();
            }
        '''),
    ),
)


@pytest.mark.parametrize('input_dict, output_str', cases)
def test_stubs(input_dict, output_str):
    assert Function.from_dict(input_dict).generate_stub() == output_str
