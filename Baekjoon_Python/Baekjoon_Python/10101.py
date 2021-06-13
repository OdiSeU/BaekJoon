a, b, c = int(input()), int(input()), int(input())
if a + b + c != 180:
    msg = 'Error'
elif a == b == c:
    msg = 'Equilateral'
elif a==b or b==c or a==c:
    msg = 'Isosceles'
else:
    msg = 'Scalene'
print(msg)