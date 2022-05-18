N = int(input())
answer = ''

for i in range(N):
    if i % 2 == 1:
        answer += ' '
    answer += '* ' * N + '\n'

print(answer)