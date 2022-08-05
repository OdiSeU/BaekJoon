import sys

def get_score(x):
    li = x.split()
    li.sort(key=lambda x: (-li.count(x), -int(x)))
    eye, cnt = int(li[0]), li.count(li[0])
    if cnt == 3:
        return 10000 + eye*1000
    elif cnt == 2:
        return 1000 + eye*100
    else:
        return eye*100


print(max(map(get_score, sys.stdin.readlines()[1:])))