import pathlib
import sys

from stubs import process_file


pawn_modules = {
    'a_samp': 'Core',
    'a_http': 'HTTP',
    'a_sampdb': 'Database',
    'a_vehicles': 'Vehicle',
    'a_players': 'Player',
    'a_actor': 'Actor',
    'a_npc': 'NPC',
    'a_objects': 'Object',
}


def main():
    for path in pathlib.Path('samp-stdlib').glob('*.inc.json'):
        pawn_module = path.stem.partition('.')[0]
        process_file(path, pawn_modules[pawn_module])


if __name__ == '__main__':
    sys.exit(main())
