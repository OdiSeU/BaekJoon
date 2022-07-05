import sys

to_board = lambda x: list(map(int, x.split()))

N, M, K = map(int, input().split())
board = list(map(to_board, sys.stdin.readlines()))
selected = set()

def solution(cnt, row, col, sum):
    global board, selected
    if cnt == 0:
        return sum
    max_sum = -123456
    for r in range(row, N):
        for c in range(col+1 if r == row else 0, M):
            now = r*10+c
            if r-1 >= 0 and now-10 in selected: continue
            if c-1 >= 0 and now-1 in selected: continue
            if r+1 < N and now+10 in selected: continue
            if c+1 < M and now+1 in selected: continue
            selected.add(now)
            max_sum = max(max_sum, solution(cnt-1, r, c, sum+board[r][c]))
            selected.remove(now)
    return max_sum

print(solution(K, 0, -1, 0))