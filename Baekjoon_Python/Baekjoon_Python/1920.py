input()
A = sorted(map(int, input().split()))
input()
B = map(int, input().split())
for i in B:
    isFind = False
    for j in A:
        if i == j:
            isFind = True
            break
        elif i < j:
            break
    print(1 if isFind else 0)