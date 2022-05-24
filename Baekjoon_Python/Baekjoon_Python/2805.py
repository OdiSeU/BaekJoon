from bisect import bisect_left

N, M = map(int, input().split())
trees = sorted(list(map(int, input().split())))

low, high = 0, trees[-1]

while(low <= high):
    mid = (low + high) // 2
    over = trees[bisect_left(trees, mid):]
    total = sum(over) - mid * len(over)
    if total < M: high = mid - 1
    else: low = mid + 1

print(low-1)