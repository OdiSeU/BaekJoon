import sys

input = sys.stdin.readline
N, M = map(int, input().split())
A, B = set(), set()
for i in range(N):
    A.add(input().rstrip())
for i in range(M):
    B.add(input().rstrip())
C = sorted(A.intersection(B))
print(len(C))
print('\n'.join(C))