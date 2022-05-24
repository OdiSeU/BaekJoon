N = int(input())

board = [input() for _ in range(N)]

def quadTree(r, c, n):
    if n == 0: return board[r][c]
    result = quadTree(r, c, n//2)
    result += quadTree(r, c+n, n//2)
    result += quadTree(r+n, c, n//2)
    result += quadTree(r+n, c+n, n//2)
    if result == '1111' or result == '0000':
        return result[0]
    return f'({result})'

print(quadTree(0, 0, N//2))