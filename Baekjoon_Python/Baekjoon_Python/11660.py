import sys
input = sys.stdin.readline

N, M = map(int, input().split())
grid = [[0]*(N+1)]
for i in range(1, N+1):
    num = list(map(int, input().split()))
    grid.append([0]*(N+1))
    acc = 0
    for j in range(1, N+1):
        acc += num[j-1]
        grid[i][j] = acc + grid[i-1][j]

for _ in range(M):
    x1, y1, x2, y2 = map(int, input().split())
    print(grid[x2][y2] - grid[x1-1][y2] - grid[x2][y1-1] + grid[x1-1][y1-1])