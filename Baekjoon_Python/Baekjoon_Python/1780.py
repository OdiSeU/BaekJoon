import sys

N = int(input())
paper = list(map(str.split, sys.stdin.readlines()))
cnts = [0] * 3

def check(r, c, n):
    for x in range(r, r+n):
        for y in range(c, c+n):
            if paper[r][c] != paper[x][y]:
                return False
    return True

def solution(r, c, n):
    if check(r, c, n):
        cnts[int(paper[r][c])+1] += 1
    else:
        n //= 3
        for i in range(3):
            for j in range(3):
                solution(r + n*i, c + n*j, n)
    return

solution(0, 0, N)
print('\n'.join(map(str, cnts)))