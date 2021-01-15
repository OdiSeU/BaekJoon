import sys, heapq

input = sys.stdin.readline
heap = []
N = int(input())
for i in range(N):
    v = int(input())
    if v:
        heapq.heappush(heap, -v)
    elif len(heap):
        print(-heapq.heappop(heap))
    else:
        print(0)
