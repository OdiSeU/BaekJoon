import sys


words = list(map(str.strip, sys.stdin.readlines()))
answer = []

def at(s, i):
    try: return s[i]
    except: return ''

for i in range(15):
    tmp = ''.join([at(s, i) for s in words])
    answer.append(tmp)
    if tmp == '': break
    
print(''.join(answer))