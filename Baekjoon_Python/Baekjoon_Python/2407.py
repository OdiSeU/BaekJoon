n, m = map(int, input().split())
x = y = 1

for i in range(m):
    x *= (n - i)
    y *= (i + 1)

print(x // y)