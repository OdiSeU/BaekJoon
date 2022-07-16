A, B = input().split()

def change(n, a, b):
    return int(n.replace(a, b))

sum_min = change(A, '6', '5') + change(B, '6', '5')
sum_max = change(A, '5', '6') + change(B, '5', '6')

print(sum_min, sum_max)