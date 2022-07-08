import sys

answer = []

for input in sys.stdin.readlines()[:-1]:
    a, b = map(int, input.split())
    if b % a == 0: answer.append('factor')
    elif a % b == 0: answer.append('multiple')
    else: answer.append('neither')

print('\n'.join(answer))