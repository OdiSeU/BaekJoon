import sys
sys.setrecursionlimit(12345)
input = sys.stdin.readline
N, M, K = map(int, input().split())
floor = [[0]*M for _ in range(N)]
food = []
max_size = now_size = 0

def DFS(row, col):
    global floor, now_size, N, M
    now_size += 1
    floor[row][col] = 0
    for dx, dy in [[0, -1], [-1, 0], [0, 1], [1, 0]]:
        r, c = row + dy, col + dx
        if 0 <= r < N and 0 <= c < M and floor[r][c]:
            DFS(r, c)

for i in range(K):
    r, c = map(int, input().split())
    food.append([r-1, c-1])
    floor[r-1][c-1] = 1

for i in food:
    if floor[i[0]][i[1]]:
        now_size = 0
        DFS(i[0], i[1])
        max_size = max(max_size, now_size)

print(max_size)