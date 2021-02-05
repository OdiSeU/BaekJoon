import sys
input = sys.stdin.readline
N = int(input())
costs = [[float('inf')]*N for _ in range(N)]
for i in range(N):
    costs[i][i] = 0
for _ in range(int(input())):
    i, j, v = map(int, input().split())
    costs[i-1][j-1] = min(v, costs[i-1][j-1])

for m in range(N):
    for i in range(N):
        for j in range(N):
            costs[i][j] = min(costs[i][j], costs[i][m]+costs[m][j])

for i in range(N):
    for j in range(N):
        if costs[i][j] == float('inf'):
            costs[i][j] = 0

for i in range(N):
    print(*costs[i])