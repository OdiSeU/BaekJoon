from math import sqrt
import sys

def solution(n):
    return str(int(sqrt(int(n))))

print('\n'.join(map(solution, sys.stdin.readlines()[1:])))