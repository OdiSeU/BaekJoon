import sys
from collections import deque
input = sys.stdin.readline
N = int(input())
tree = [[] for _ in range(N+1)]
parent = [0]*(N+1)
parent[1] = -1

for _ in range(N-1):
    x, y = map(int, input().split())
    tree[x].append(y)
    tree[y].append(x)

q = deque([1])
while q:
    now = q.popleft()
    for i in tree[now]:
        if parent[i] == 0:
            parent[i] = now
            q.append(i)

print(*parent[2:], sep='\n')
