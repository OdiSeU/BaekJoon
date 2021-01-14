import sys
input = sys.stdin.readline

N, M = map(int, input().rstrip().split())
pokeDic_str = {}
pokeDic_idx = {}
for i in range(N):
    poke = input().rstrip()
    pokeDic_str[poke] = i+1
    pokeDic_idx[i+1] = poke
for i in range(M):
    want = input().rstrip()
    try:
        want = int(want)
        sys.stdout.write(pokeDic_idx[want]+'\n')
    except:
        sys.stdout.write(str(pokeDic_str[want])+'\n')
