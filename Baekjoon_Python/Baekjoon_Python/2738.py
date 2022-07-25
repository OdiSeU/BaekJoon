import sys

def to_matrix(data):
    return list(map(lambda x: list(map(int, x.split())), data))

N, M = map(int, input().split())
inputs = sys.stdin.readlines()
mtrx_a = to_matrix(inputs[:N])
mtrx_b = to_matrix(inputs[N:])

answer = []

for r in range(N):
    tmp = []
    for c in range(M):
        tmp.append(mtrx_a[r][c] + mtrx_b[r][c])
    answer.append(' '.join(map(str, tmp)))

print('\n'.join(answer))