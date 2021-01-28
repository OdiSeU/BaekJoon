import sys
input = sys.stdin.readline

result = [""]*3
tree = {}

def solution(now):
    left, right = tree[now]
    result[0] += now
    if left != '.': solution(left)
    result[1] += now
    if right != '.': solution(right)
    result[2] += now

N = int(input())
for i in range(N):
    parent, left, right = input().split()
    tree[parent] = [left, right]

solution('A')
print('\n'.join(result))

