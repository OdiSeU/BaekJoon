from bisect import bisect_left, bisect_right

N, M = map(int, input().split())

trees = sorted(list(map(int, input().split())))

def z(x):
    sum = 0
    for i in range(bisect_left(trees, x), N):
        sum += max(trees[i]-x, 0)
    return sum

print(bisect_right(trees, M, key= z))