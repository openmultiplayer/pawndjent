import re
import textwrap
from dataclasses import InitVar, dataclass, fields
from typing import Any, List


TAG_TYPE_TABLE = {
    '_': 'int',
    'Float': 'float',
}


def get_type_from_tag(tag):
    return TAG_TYPE_TABLE.get(tag, '_')


@dataclass
class Argument:
    name: str
    tag: str
    is_const: bool
    is_array: bool
    is_reference: InitVar[bool]
    default_value: Any = None

    regexp = re.compile(
        r'''
        (const\s+)?      # Const specifier
        (&)?             # Reference
        (?:(\w+):\s*)?   # Tag
        (\w+)            # Name
        (\[\])?          # Array
        (?:\s*=\s*(.*))? # Default value
        \s*              # Ignore trailing whitespace
        ''',
        re.VERBOSE
    )

    def __post_init__(self, is_reference):
        self._is_reference = is_reference

    @property
    def is_reference(self):
        return self._is_reference or (self.is_array and not self.is_const)

    @classmethod
    def from_string_list(cls, string_list):
        return [
            cls.from_str(string)
            for string in string_list
            if string != '...'
        ]

    @classmethod
    def from_str(cls, data):
        match = cls.regexp.fullmatch(data)

        if not match:
            raise ValueError(f'Invalid argument: {data!r}')

        is_const, is_reference, tag, name, is_array, default_value = (
            match.groups()
        )
        is_const = bool(is_const)
        is_reference = bool(is_reference)
        tag = tag if tag else '_'
        is_array = bool(is_array)

        if default_value:
            if tag == 'Float':
                default_value = float(default_value)

            else:
                try:
                    default_value = int(default_value)
                except ValueError:
                    pass

        return cls(
            name=name,
            tag=tag,
            is_const=is_const,
            is_array=is_array,
            is_reference=is_reference,
            default_value=default_value,
        )

    @classmethod
    def from_dict(cls, data):
        return cls(**data)

    def to_dict(self):
        return {
            **{
                field.name: getattr(self, field.name)
                for field in fields(self)
            },
            'is_reference': self.is_reference,
        }

    def generate_stub(self):
        name = self.name
        tag = self.tag
        # is_const = self.is_const
        # is_array = self.is_array
        # default_value = self.default_value
        # is_reference = self.is_reference

        type = get_type_from_tag(tag)
        return f'{type} {name}'


@dataclass
class Function:
    name: str
    tag: str
    is_callback: bool
    arguments: List[Argument]
    is_variadic: bool

    @staticmethod
    def is_string_list_variadic(string_list):
        is_variadic = '...' in string_list

        if is_variadic:
            if(
                string_list.count('...') != 1
                or string_list[-1] != '...'
            ):
                raise ValueError('Invalid variadic specification')

        return is_variadic

    @classmethod
    def from_dict(cls, data):
        data['arguments'] = [
            Argument.from_dict(argument)
            for argument in data['arguments']
        ]
        return cls(**data)

    def to_dict(self):
        return {
            **{
                field.name: getattr(self, field.name)
                for field in fields(self)
                if field.name != 'arguments'
            },
            'arguments': [
                argument.to_dict()
                for argument in self.arguments
            ],
        }

    def get_return_type_from_tag(self, tag):
        if tag == '_':
            # TODO: Apply "default" heuristics
            return 'bool'

        return get_type_from_tag(tag)

    def generate_stub(self):
        name = self.name
        # TODO: Apply multi-argument heuristics first
        # XXX: Handling order preservation in a multi-pass process
        return_type = self.get_return_type_from_tag(self.tag)
        argument_stubs = [
            argument.generate_stub()
            for argument in self.arguments
        ]

        return textwrap.dedent(f'''
            SCRIPT_API({name}, {return_type}({', '.join(argument_stubs)})) {{
                throw NotImplemented();
            }}
        ''').strip()
