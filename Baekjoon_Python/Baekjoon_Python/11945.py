import sys
input()

print('\n'.join(map(lambda x: x.strip()[::-1], sys.stdin.readlines())))