import sys

answer = count = 0

for line in sys.stdin.readlines():
    get_off, get_on = map(int, line.split())
    count += get_on - get_off
    answer = max(answer, count)

print(answer)