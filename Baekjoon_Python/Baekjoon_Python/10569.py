import sys

def solution(x):
    V, E = map(int, x.split())
    return str(E - V + 2)

input()
print('\n'.join(map(solution, sys.stdin.readlines())))