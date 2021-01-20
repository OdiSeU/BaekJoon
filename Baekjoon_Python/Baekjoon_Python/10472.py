visit = [416, 464, 200, 308, 186, 89, 38, 23, 11]
board = {0:0}

for i in range(1024):
    now = cnt = 0
    for j in range(9):
        if i & (1 << j):
            now ^= visit[j]
            cnt += 1
        if now in board:
            board[now] = min(cnt, board[now])
        else:
            board[now] = cnt

for i in range(int(input())):
    want = (input()+input()+input()).replace('*', '1').replace('.', '0')
    print(board[int(want,2)])