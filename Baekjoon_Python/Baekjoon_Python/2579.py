import sys

N = int(sys.stdin.readline())
stairs = [0]*300
sums = [0]*300
for i in range(N):
    stairs[i] = int(sys.stdin.readline())
sums[0] = stairs[0]
sums[1] = stairs[0] + stairs[1]
sums[2] = max(stairs[0] + stairs[2], stairs[1] + stairs[2])
for i in range(3, N):
    sums[i] = max(sums[i-3]+stairs[i-1], sums[i-2]) + stairs[i]
sys.stdout.write(str(sums[N-1]))
