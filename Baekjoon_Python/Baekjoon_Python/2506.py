answer = 0
score = 1
input()

for x in input().split():
    if x == '1':
        answer += score
        score += 1
    else:
        score = 1

print(answer)