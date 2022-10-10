A, B = map(int, input().split())

dp = {0:0, 1:1}

def func(n):
    if n in dp: return dp[n]
    x = 2 ** (len(bin(n))-3)
    dp[n] = func(x-1) + func(n-x) + (n-x+1)
    return dp[n]

print(func(B) - func(A-1))