N = int(input())
a, b = 1, 2
for _ in range(2, N):
    a, b = b, (a+b)%15746

print(1 if N == 1 else b)