import sys
from collections import deque

input = sys.stdin.readline
tomato = day = 0
box = []
q = deque()
cols, rows = map(int,input().split())

for r in range(rows):
    box.append(input().split())
    for c in range(cols):
        if box[r][c] == '0':
            tomato += 1
        elif box[r][c] == '1':
            q.append((0, r, c))

while q and tomato:
    t, r, c = q.popleft()

    if 0 <= r - 1 and box[r - 1][c] == '0':
        box[r - 1][c] = '1'
        tomato -= 1
        q.append((t + 1, r - 1, c))
    if 0 <= c - 1 and box[r][c - 1] == '0':
        box[r][c - 1] = '1'
        tomato -= 1
        q.append((t + 1, r, c - 1))
    if r + 1 < rows and box[r + 1][c] == '0':
        box[r + 1][c] = '1'
        tomato -= 1
        q.append((t + 1, r + 1, c))
    if c + 1 < cols and box[r][c + 1] == '0':
        box[r][c + 1] = '1'
        tomato -= 1
        q.append((t + 1, r, c + 1))

    day = t + 1

print(-1 if tomato else day)