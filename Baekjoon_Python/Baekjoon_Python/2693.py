import sys

def solution(x):
    return str(sorted(list(map(int,x.split())))[-3])

print('\n'.join(map(solution, sys.stdin.readlines()[1:])))