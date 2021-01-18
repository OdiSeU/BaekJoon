from collections import deque
A, B = map(int, input().split())
ans = -1
que = deque([[A, 1]])
while que:
    now = que.popleft()
    if now[0] > B:
        continue
    elif now[0] == B:
        ans = now[1]
        break
    que.append([now[0]<<1, now[1]+1])
    que.append([now[0]*10+1, now[1]+1])

print(ans)