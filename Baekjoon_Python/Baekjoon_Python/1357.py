X, Y = map(int, input().split())
rev = lambda x: int(str(x)[::-1])

print(rev(rev(X) + rev(Y)))