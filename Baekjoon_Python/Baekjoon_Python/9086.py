import sys

input()
ans = []

for x in sys.stdin.readlines():
    x = x.strip()
    ans.append(x[0]+x[-1])

print('\n'.join(ans))