N = int(input())
memoi = [1]*N
seq = [*map(int, input().split())]
for i in range(N):
    for j in range(i+1):
        if seq[j] < seq[i] and memoi[j] >= memoi[i]:
            memoi[i] = memoi[j]+1
print(max(memoi))