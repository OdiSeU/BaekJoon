N, K = map(int, input().split())

print(max([int(str(N*i)[::-1]) for i in range(1, K+1)]))