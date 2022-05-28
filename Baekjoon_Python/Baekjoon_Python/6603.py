import sys

def solution(depth, selected, last):
    s = ''
    if depth == 6:
        for i in range(len(nums)):
            if selected & (1 << i): s += f'{nums[i]} '
        return s + '\n'
    for i in range(last, len(nums)):
        s += solution(depth+1, selected|(1<<i), i+1)
    return s

while True:
    tmp = sys.stdin.readline().split()
    if tmp[0] == '0': break
    answer = ''
    nums = list(map(int, tmp[1:]))
    sys.stdout.write(solution(0, 0, 0)+'\n')