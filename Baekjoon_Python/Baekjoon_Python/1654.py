from sys import stdin

N, M = map(int, stdin.readline().split())
lines = list(map(int, stdin.readlines()))

low, high = 1, max(lines)

while(low <= high):
    mid = (low + high) // 2
    total = sum([x//mid for x in lines])
    if total < M: high = mid - 1
    else: low = mid + 1

print(low-1)