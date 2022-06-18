A, B = map(int, input().split())

answer = j = 0
now = 1

for i in range(B):
    if i+1 >= A:
        answer += now
    j += 1
    if j == now:
        j = 0
        now += 1

print(answer)