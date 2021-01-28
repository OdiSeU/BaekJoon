import sys
input = sys.stdin.readline
N, M = map(int, input().split())

def solution(std, pick, dep):
    global N, M
    if dep == M:
        print(pick)
        return
    for i in range(std, N+1):
        solution(i+1, f'{pick}{i} ', dep+1)

solution(1, '', 0)
