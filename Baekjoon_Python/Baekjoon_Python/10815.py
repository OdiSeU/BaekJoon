_, N = input(), set(input().split())
_, M = input(), input().split()

print(' '.join(map(lambda x: '1' if x in N else '0', M)))