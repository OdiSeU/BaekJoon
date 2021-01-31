import sys
input = sys.stdin.readline
T = int(input())

for _ in range(T):
    N = int(input())
    sticker = [[*map(int, input().split())] for _ in range(2)]
    a = b = c = 0
    for i in range(N):
        a, b, c = max(b, c) + sticker[0][i], max(a, c) + sticker[1][i], max(a, b)
    sys.stdout.write(f'{max(a, b, c)}\n')