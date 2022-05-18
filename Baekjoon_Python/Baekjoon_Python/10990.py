N = int(input())
answer = [' '*(N-1)+'*']

for i in range(1, N):
    answer.append(' '*(N-i-1)+'*'+' '*(2*i-1)+'*')

print('\n'.join(answer))