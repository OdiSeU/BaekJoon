x = input()

if 'x' == x[1]:
    x = int(x[2:],16)
elif '0' == x[0]:
    x = int(x[1:], 8)

print(x)
