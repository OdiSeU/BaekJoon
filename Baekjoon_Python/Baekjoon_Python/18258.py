from collections import deque
import sys

que = deque()
command = {
    'pop': lambda : que.popleft() if que else '-1',
    'size': lambda : f'{len(que)}',
    'empty': lambda : '0' if que else '1',
    'front': lambda : que[0] if que else '-1',
    'back': lambda : que[-1] if que else '-1'
}
answer = []

input()
for cmd in sys.stdin.readlines():
    tmp = cmd.split()
    if len(tmp) == 2: que.append(tmp[1])
    else: answer.append(command[tmp[0]]())

print('\n'.join(answer))