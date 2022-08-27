input()
li, i = [], 1

for x in map(int, input().split()):
    li.insert(x, i)
    i += 1

print(' '.join(map(str, reversed(li))))