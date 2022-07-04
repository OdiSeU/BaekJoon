import sys

input()

nums = list(map(int, sys.stdin.readlines()))
MAX = max(nums)

dp = [0] * (MAX+1)
for i in range(1, MAX+1):
    for j in range(i, MAX+1, i):
        dp[j] += i
    dp[i] += dp[i-1]

print('\n'.join(map(lambda x: str(dp[x]), nums)))