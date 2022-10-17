from collections import deque


a = int(input(), base=2)
b = int(input(), base=2)

def solution(a, b):
    check = set()
    que = deque()
    answer = 0

    check.add(a)
    que.append([a, 0])

    while len(que):
        now, cnt = que.popleft()
        bit = len(bin(now))-2
        if now == b:
            answer = cnt
            break
        for i in range(0, bit -1):
            next = now ^ (1 << i)
            if next not in check:
                check.add(next)
                que.append([next, cnt+1])
        if now + 1 < 1024 and now + 1 not in check:
            check.add(now + 1)
            que.append([now + 1, cnt+1])
        if now > 0 and now - 1 not in check:
            check.add(now - 1)
            que.append([now - 1, cnt+1])

    return answer

print(solution(a, b))
