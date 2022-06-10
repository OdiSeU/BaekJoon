import sys

sums = [sum(map(int, s.split()))for s in sys.stdin.readlines()]
max_score = max(sums)

print(sums.index(max_score)+1, max_score)