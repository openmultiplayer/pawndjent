import json
import os
import textwrap
import sys


def get_return_type_from_tag(tag):
    if tag == "_":
        return "bool"
    else:
        return tag


TAG_TYPE_TABLE = {
    "_": "int",
    "Float": "float"
}


def get_type_from_tag(tag):
    return TAG_TYPE_TABLE[tag]

# IActor& actor
# const std::string& animLib
# const std::string& animName
# float delta
# int loop
# int lockX
# int lockY
# int freeze
# int time


def gen_arg(arg):
    name = arg["name"]
    tag = arg["tag"]
    is_const = arg["is_const"]
    is_array = arg["is_array"]
    default_value = arg["default_value"]
    is_reference = arg["is_reference"]

    type = get_type_from_tag(tag)

    return f"{type} {name}"


def generate_stubs(ir):
    functions = []

    for fn in ir["functions"]:
        name = fn["name"]
        return_type = get_return_type_from_tag(fn["tag"])
        args = [gen_arg(a) for a in fn["arguments"]]

        functions.append(textwrap.dedent(f'''
            SCRIPT_API({name}, {return_type}({', '.join(args)})) {{
                throw NotImplemented();
            }}
        '''))

    return ''.join(functions)


def process_file(filename, module):
    """
    generates C++ stubs from JSON IR data
    """

    output_filename = os.path.join("Pawn/Scripting/", module, "Natives.cpp")
    print(filename, "->", output_filename)

    ir = None
    with open(filename, 'r') as input_file:
        ir = json.loads(input_file.read())

    output_contents = generate_stubs(ir)

    with open(output_filename, 'w') as output_file:
        output_file.write(output_contents)


def main():
    if len(sys.argv) < 2:
        print(f'Usage: {sys.argv[0]} path_to_json_ir module_name')
        return

    path = sys.argv[1]
    module = sys.argv[2]

    if not os.path.exists(path):
        print("File not found.")
        return

    if os.path.isfile(path):
        process_file(path, module)
        return


if __name__ == '__main__':
    main()
