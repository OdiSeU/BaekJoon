import sys
from collections import deque
input = sys.stdin.readline
M, N = map(int, input().split())
grid = [[int(i) for i in input().rstrip()] for _ in range(M)]
q = deque()

def BFS():
    global grid, M, N
    result = "NO"
    while q:
        row, col = q.popleft()
        for dx, dy in [[0, -1], [-1, 0], [0, 1], [1, 0]]:
            r, c = row + dy, col + dx
            if 0 <= r < M and 0 <= c < N and grid[r][c] == 0:
                if r == M-1:
                    return "YES"
                grid[r][c] = 1
                q.append((r, c))
    return result

for i in range(len(grid[0])):
    if grid[0][i] == 0:
        grid[0][i] = 1
        q.append((0, i))

print(BFS())