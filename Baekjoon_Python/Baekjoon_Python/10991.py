N = int(input())

result = ' ' * (N - 1) + '*'

for i in range(1, N):
    result += '\n' + ' ' * (N - i - 1) + '*' + ' *' * i

print(result)