import sys

input()
answer = 0

for x in sys.stdin.readlines():
    a, b = map(int, x.split())
    answer += b % a

print(answer)