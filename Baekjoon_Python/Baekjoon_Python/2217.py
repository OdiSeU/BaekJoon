import sys

answer, i = 0, int(input())
ropes = sorted(map(int, sys.stdin.readlines()))

for x in ropes:
    answer = max(answer, x * i)
    i -= 1

print(answer)