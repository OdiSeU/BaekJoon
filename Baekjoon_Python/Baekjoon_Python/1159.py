import sys

li = list(map(lambda x: x[0], sys.stdin.readlines()[1:]))
answer = []

for x in set(li):
    if li.count(x) >= 5:
        answer.append(x)

if len(answer):
    print(''.join(sorted(answer)))
else:
    print('PREDAJA')