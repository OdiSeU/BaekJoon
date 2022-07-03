import sys

N, M = map(int, input().split())
arr = [[0]*(M+1)]

for i in range(N):
    tmp = [0]
    line = sys.stdin.readline().split()
    for j in range(M):
        tmp.append(arr[i][j+1]-arr[i][j]+tmp[-1]+int(line[j]))
    arr.append(tmp)

T = int(input())
ans = []

for cmd in sys.stdin.readlines():
    i, j, x, y = map(int, cmd.split())
    ans.append(str(arr[x][y]-arr[i-1][y]-arr[x][j-1]+arr[i-1][j-1]))

print('\n'.join(ans))