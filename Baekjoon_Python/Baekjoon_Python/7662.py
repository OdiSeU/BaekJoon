import sys, bisect
from collections import deque

input = sys.stdin.readline
T = int(input())
for i in range(T):
    pq = deque()
    cnt = {}
    k = int(input())
    for j in range(k):
        e, v = input().split()
        v = int(v)
        if e == 'I':
            try:
                cnt[v] += 1
            except:
                cnt[v] = 1
                bisect.insort_left(pq, v)
        elif pq:
            x = -1 if v > 0 else 0
            cnt[pq[x]] -= 1
            if cnt[pq[x]] == 0:
                cnt.pop(pq[x])
                pq.pop() if v > 0 else pq.popleft()
    if pq:
        print(pq[-1], pq[0])
    else:
        print('EMPTY')
