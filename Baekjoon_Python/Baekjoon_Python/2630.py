import sys

N = int(input())
paper = [sys.stdin.readline().rstrip().replace(' ','') for _ in range(N)]
colors = [0, 0]

def dividePaper(row, col, n):
    global colors, paper
    cnt = [0, 0]
    isDivide = False
    if n == 0:
        return isDivide
    for i in range(4):
        r = row + ((i & 2)>>1) * n
        c = col + (i & 1) * n
        if not dividePaper(r, c, n//2):
            cnt[int(paper[r][c])] += 1

    if cnt[0] != 4 and cnt[1] != 4:
        isDivide = True
        colors[0] += cnt[0]
        colors[1] += cnt[1]

    return isDivide

dividePaper(0, 0, N//2)
print('{0}\n{1}'.format(colors[0],colors[1]))