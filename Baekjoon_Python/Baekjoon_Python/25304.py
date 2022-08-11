import sys

def solution(x):
    a, b = map(int, x.split())
    return a * b

X = int(input())
n = sum(map(solution, sys.stdin.readlines()[1:]))

print('Yes' if X == n else 'No')