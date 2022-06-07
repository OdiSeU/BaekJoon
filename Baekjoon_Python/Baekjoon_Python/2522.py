N = int(input())

arr = [0]*(N*2-1)

for i in range(N):
    arr[i] = arr[(N-1)*2-i] = ' '*(N-i-1)+'*'*(i+1)

print('\n'.join(arr))