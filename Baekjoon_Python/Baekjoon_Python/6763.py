over = -int(input()) + int(input())
if over > 0:
    if over <= 20: fine = 100
    elif over <= 30: fine = 270
    else: fine = 500
    print(f'You are speeding and your fine is ${fine}.')
else:
    print('Congratulations, you are within the speed limit!')