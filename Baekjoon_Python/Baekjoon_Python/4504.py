import sys

n = int(input())

def solution(x):
    x = int(x)
    s = 'NOT ' if n > x or x % n else ''
    return f'{x} is {s}a multiple of {n}.'

print('\n'.join(map(solution, sys.stdin.readlines()[:-1])))