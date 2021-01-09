import sys
input, print = sys.stdin.readline, sys.stdout.write

_, A = input(), {i:0 for i in list(map(int, input().split()))}
_, B = input(), map(int, input().split())
for i in B:
    try:
        A[i]
        print('1\n')
    except KeyError:
        print('0\n')