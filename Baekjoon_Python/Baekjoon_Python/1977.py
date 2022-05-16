import math


M, N = int(input()), int(input())
answer = []

for i in range(M, N+1):
    if math.sqrt(i) % 1 == 0:
        answer.append(i)

if len(answer):
    print(f'{sum(answer)}\n{answer[0]}')
else:
    print(-1)