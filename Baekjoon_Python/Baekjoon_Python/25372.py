import sys

print('\n'.join(map(lambda x: 'yes' if 6<=len(x.strip())<=9 else 'no', sys.stdin.readlines()[1:])))