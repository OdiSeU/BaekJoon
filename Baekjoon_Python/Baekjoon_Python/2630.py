import sys

N = int(input())
paper = [sys.stdin.readline().rstrip().replace(' ','') for _ in range(N)]
cnt = [0, 0]

def dividePaper(row, col, n):
    global blue, white, paper
    area = [0, 0, 0]
    n //= 2
    if n == 0:
        area[int(paper[row][col])] += 1
        return area
    for i in range(4):
        r = row + ((i & 2)>>1) * n
        c = col + (i & 1) * n
        result = dividePaper(r, c, n)
        if result[0] == 4:
            area[0] += 1
        elif result[1] == 4:
            area[1] += 1
        else:
            area[2] += 1

    if area[0] == 4:
        white += 1
    elif area[1] == 4:
        blue += 1

    return isDiff

dividePaper(0, 0, N)
print('{0}\n{1}'.format(cnt['0'],cnt['1']))