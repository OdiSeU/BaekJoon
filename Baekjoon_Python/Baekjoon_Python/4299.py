a, b = map(int,input().split())
if b > a or (a + b) % 2:
    print(-1)
else:
    print((a + b) // 2, (a - b) // 2)