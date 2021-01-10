import sys

n = 0
input = sys.stdin.readline
M = int(input())
for _ in range(M):
    exp = input().strip().split()
    if exp[0] == 'all':
        n = (1 << 21) - 1
    elif exp[0] == 'empty':
        n = 0
    else:
        v = int(exp[1])-1
        if exp[0] == 'add':
            n |= (1 << v)
        elif exp[0] == 'remove':
            n &= ~(1 << v)
        elif exp[0] == 'check':
            sys.stdout.write('1\n' if n & (1 << v) else '0\n')
        elif exp[0] == 'toggle':
            n ^= (1 << v)
