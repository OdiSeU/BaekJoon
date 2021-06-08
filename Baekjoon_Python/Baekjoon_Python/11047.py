N, K = map(int, input().split())
coins = []
count = 0
for i in range(N):
    coins.append(int(input()))

for i in range(N):
    count += K // (coins[-(i+1)])
    K %= coins[-(i+1)]
    if K == 0: break

print(count)