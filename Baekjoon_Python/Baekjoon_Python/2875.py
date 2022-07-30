from math import ceil

N, M, K = map(int, input().split())

team = min(N//2, M)
K -= N + M - team * 3

if K > 0:
    team -= ceil(K/3)

print(team)