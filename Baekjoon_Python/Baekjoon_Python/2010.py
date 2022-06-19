import sys

N = int(input())
print(sum(map(int, sys.stdin.readlines()))-N+1)