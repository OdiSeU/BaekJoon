import sys
sys.setrecursionlimit(1024)
input = sys.stdin.readline

N, M = map(int, input().split())
graph = [[] for i in range(N)]
visited = [False]*N
connComp = 0

def DFS(i):
    global visited, graph
    visited[i] = True
    for j in graph[i]:
        if not visited[j]:
            DFS(j)

for _ in range(M):
    n1, n2 = map(int, input().split())
    graph[n1-1].append(n2-1)
    graph[n2-1].append(n1-1)

for i in range(N):
    if not visited[i]:
        connComp += 1
        DFS(i)

print(connComp)