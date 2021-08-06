import json
import os
import pathlib
import sys

from model import Function


def generate_stubs(functions):
    """Generates and returns C++ stubs as strings from IR data."""
    stubs = []

    for function in functions:
        stubs.append(function.generate_stub())

    return stubs


def process_file(input_path, module_name):
    """Writes C++ stubs from JSON IR input_path to specified module."""
    output_path = (
        pathlib.Path('Pawn') / 'Scripting' / module_name / 'Natives.cpp'
    )
    print(f'{input_path} -> {output_path}')
    ir = json.loads(input_path.read_text())
    functions = [Function.from_dict(function) for function in ir['functions']]
    output_contents = generate_stubs(functions)
    os.makedirs(output_path.parent, exist_ok=True)
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
