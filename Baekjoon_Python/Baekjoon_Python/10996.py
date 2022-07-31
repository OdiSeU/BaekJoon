N = int(input())

if N == 1:
    print('*')
else:
    arr = [['* ' * ((N+1)//2)],[' *' * (N//2)]] * N
    print('\n'.join(map(''.join, arr)))