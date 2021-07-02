N = input()
if len(N) == 3:
    if N[1] == '0':
        x = int(N[:2]) + int(N[2])
    else:
        x = int(N[0]) + int(N[1:])
else:
    x = int(N[:len(N)//2]) + int(N[len(N)//2:])
print(x)