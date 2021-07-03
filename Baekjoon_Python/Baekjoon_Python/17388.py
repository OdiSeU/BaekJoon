S, K, H = map(int, input().split())
if S+K+H < 100:
    m = min(S,K,H)
    if m == S:
        print('Soongsil')
    elif m == K:
        print('Korea')
    else:
        print('Hanyang')
else:
    print("OK")