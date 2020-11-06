A, B, C = map(int, input().split(' '))

if A > B:
    A, B = B, A

if C < A:
    print(A)
elif C < B:
    print(C)
else:
    print(B)