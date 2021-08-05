import json
import os
import pathlib
import textwrap
import sys


TAG_TYPE_TABLE = {
    "_": "int",
    "Float": "float"
}


def get_return_type_from_tag(tag):
    if tag == "_":
        return "bool"
    else:
        return TAG_TYPE_TABLE.get(tag, '_')


def get_type_from_tag(tag):
    return TAG_TYPE_TABLE[tag]


def gen_arg(arg):
    name = arg["name"]
    tag = arg["tag"]
    # is_const = arg["is_const"]
    # is_array = arg["is_array"]
    # default_value = arg["default_value"]
    # is_reference = arg["is_reference"]

    type = get_type_from_tag(tag)

    return f"{type} {name}"


def generate_stubs(ir):
    """Generates and returns C++ stubs as strings from IR data."""
    functions = []

    for fn in ir["functions"]:
        name = fn["name"]
        return_type = get_return_type_from_tag(fn["tag"])
        args = [gen_arg(a) for a in fn["arguments"]]

        functions.append(textwrap.dedent(f'''
            SCRIPT_API({name}, {return_type}({', '.join(args)})) {{
                throw NotImplemented();
            }}
        ''').strip())

    return functions


def process_file(input_path, module_name):
    """Writes C++ stubs from JSON IR input_path to specified module."""
    output_path = (
        pathlib.Path('Pawn') / 'Scripting' / module_name / 'Natives.cpp'
    )
    print(f'{input_path} -> {output_path}')
    ir = json.loads(input_path.read_text())
    output_contents = generate_stubs(ir)
    output_path.write_text('\n\n'.join(output_contents))


def main():
    if len(sys.argv) < 2:
        print(f'Usage: {sys.argv[0]} path_to_json_ir module_name')
        return

    path = pathlib.Path(sys.argv[1])
    module_name = sys.argv[2]

    if not os.path.exists(path):
        print('File not found.')
        return 1

    if not path.is_file():
        print("Can't operate on a folder (yet).")
        return 1

    process_file(path, module_name)


if __name__ == '__main__':
    sys.exit(main())
