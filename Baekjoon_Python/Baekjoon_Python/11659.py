import sys

_, nums = input(), list(map(int, input().split()))
memoi = [0]
answer = []

for x in nums:
    memoi.append(memoi[-1] + x)

for x in sys.stdin.readlines():
    i, j = map(int, x.split())
    answer.append(memoi[j] - memoi[i-1])

print('\n'.join(map(str, answer)))