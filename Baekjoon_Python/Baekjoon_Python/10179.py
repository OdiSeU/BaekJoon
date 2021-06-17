def round(n):
    n = int(n * 1000)
    if n % 10 > 4:
        n += 10
    return (n // 10) / 100

N = int(input())
for i in range(N):
    print('$%.2f' % round(float(input()) * 0.8))