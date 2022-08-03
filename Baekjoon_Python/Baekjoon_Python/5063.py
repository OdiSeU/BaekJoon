import sys

def solution(x):
    r, e, c = map(int, x.split())
    if r < e-c: return 'advertise'
    elif r > e-c: return 'do not advertise'
    return 'does not matter'

print('\n'.join(map(solution, sys.stdin.readlines()[1:])))