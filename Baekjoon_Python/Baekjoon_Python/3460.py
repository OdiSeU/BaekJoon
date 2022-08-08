import sys

def solution(x):
    i, arr = 0, []
    x = int(x)
    while x:
        if x & 1:
            arr.append(str(i))
        i += 1
        x >>= 1
    return ' '.join(arr)

print('\n'.join(map(solution, sys.stdin.readlines()[1:])))