memoi = {1:1, 2:2}
n = int(input())
for i in range(3, n+1):
    memoi[i] = (memoi[i-1] + memoi[i-2]) % 10007
print(memoi[n])