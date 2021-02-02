import sys
input = sys.stdin.readline

N, M = map(int, input().split())
memoi = [0]*(M+1)
for i in range(N):
    w, v = map(int, input().split())
    tmp = memoi[:]
    for i in range(w, M+1):
        tmp[i] = max(memoi[i], memoi[i-w]+v)
    memoi = tmp
print(memoi[M])