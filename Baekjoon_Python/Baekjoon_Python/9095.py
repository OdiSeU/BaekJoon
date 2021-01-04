memoi = [1, 2, 4]

def solution(n):
    if len(memoi) < n:
        memoi.append(solution(n-1)+solution(n-2)+solution(n-3))
    return memoi[n-1]

T = int(input())
for i in range(T):
    print(solution(int(input())))