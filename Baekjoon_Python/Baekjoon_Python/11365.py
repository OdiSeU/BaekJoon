import sys

print('\n'.join(map(lambda x: x.strip()[::-1], sys.stdin.readlines()[:-1])))