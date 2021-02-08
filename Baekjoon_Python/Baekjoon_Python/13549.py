from collections import deque

chk = {}
N, K = map(int, input().split())
q = deque([N])
chk[N] = 0

while q:
    c = q.popleft()
    if c == K:
        print(chk[c])
        break
    if c*2 < 111111 and c*2 not in chk:
        q.appendleft(c*2)
        chk[c*2] = chk[c]
    if c+1 < 111111 and c+1 not in chk:
        q.append(c+1)
        chk[c+1] = chk[c] + 1
    if c-1 >= 0 and c-1 not in chk:
        q.append(c-1)
        chk[c-1] = chk[c] + 1