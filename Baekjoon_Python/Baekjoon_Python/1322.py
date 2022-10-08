X, K = map(int, input().split())

def solution(X, K):
    s = ''

    while K:
        if(X & 1):
            s = '0' + s
        else:
            s = str(K&1) + s
            K >>= 1
        X >>= 1
    
    return int(s, base=2)

print(solution(X, K))