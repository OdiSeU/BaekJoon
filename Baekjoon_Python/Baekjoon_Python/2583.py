from collections import deque
import sys

N, M, K = map(int, input().split())
areas = []
colored = set()

def bfs(r, c):
    colored.add(r*100 + c)
    que = deque([(r,c)])
    cnt = 1
    while que:
        nowR, nowC = que.popleft()
        for dr, dc in [(-1,0), (0,-1), (1,0), (0,1)]:
            nextR, nextC = nowR + dr, nowC + dc
            if 0 <= nextR < M and 0 <= nextC < N:
                if nextR*100+nextC not in colored:
                    colored.add(nextR*100 + nextC)
                    que.append((nextR, nextC))
                    cnt +=1 
    return cnt


for square in sys.stdin.readlines():
    r1, c1, r2, c2 = map(int, square.split())
    for r in range(r1, r2):
        for c in range(c1, c2):
            colored.add(r*100 + c)

for r in range(0, M):
    for c in range(0, N):
        if r*100+c not in colored:
            areas.append(bfs(r, c))
            


print(f'{len(areas)}\n{" ".join(map(str, sorted(areas)))}')