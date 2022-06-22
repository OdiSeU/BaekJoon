import sys

A = set([x for x in range(1, 31)])
B = set(map(int, sys.stdin.readlines()))

print('\n'.join(map(str, sorted(A-B))))