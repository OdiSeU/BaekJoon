import sys
from collections import deque
input = sys.stdin.readline
while True:
    w, h = map(int, input().split())
    if w == 0 and h == 0:
        break
    maps = []
    cnt = 0
    for i in range(h):
        maps.append(list(map(int, input().split())))

    for row in range(h):
        for col in range(w):
            if maps[row][col] == 1:
                cnt += 1
                q = deque([[row, col]])
                maps[row][col] = 0
                while q:
                    now_r, now_c = q.popleft()
                    for i in range(-1,2):
                        for j in range(-1,2):
                            if i | j != 0:
                                next_r, next_c = now_r + i, now_c +j
                                if 0 <= next_r < h and 0 <= next_c < w:
                                    if maps[next_r][next_c] == 1:
                                        maps[next_r][next_c] = 0
                                        q.append([next_r, next_c])
    print(cnt)