N = int(input())
arr = [str(x+1) for x in range(N)]
check = [0] * N
answer = []

def solution(cnt, selected):
    global arr, check, answer
    if cnt == 0:
        answer.append(' '.join(selected))
        return
    for i in range(N):
        if check[i] == 0:
            check[i] = 1
            solution(cnt-1, selected+[arr[i]])
            check[i] = 0

solution(N, [])

print('\n'.join(answer))