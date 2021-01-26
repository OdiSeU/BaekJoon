A, B, C = map(int, input().split())

def pow(a, b, c=0):
    if b < 2:
        return a if b else 1
    n = pow(a, b//2, c)
    return ((n * n) * pow(a, b&1)) % c

print(pow(A%C, B, C))