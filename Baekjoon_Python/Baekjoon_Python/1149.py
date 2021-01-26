import sys
input = sys.stdin.readline
N = int(input())
memoi = list(map(int, input().split()))

for i in range(1, N):
    now = list(map(int, input().split()))
    tmp = [
        min(memoi[1], memoi[2]) + now[0],
        min(memoi[0], memoi[2]) + now[1],
        min(memoi[0], memoi[1]) + now[2]
    ]
    memoi = tmp

print(min(memoi))