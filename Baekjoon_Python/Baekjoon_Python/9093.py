import sys
input = sys.stdin.readline
for _ in range(int(input())):
    print(*map(lambda x: x[::-1], input().split()))