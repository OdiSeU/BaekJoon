import sys

def get_parents(n):
    result = [n]
    while graph[n]:
        n = graph[n]
        result.append(n)
    return result

N = int(input())
x, y = map(int, input().split())
M = int(input())
graph = [0] * (N+1)

for tmp in sys.stdin.readlines():
    a, b = map(int, tmp.split())
    graph[b] = a

prnts_x = get_parents(x)
prnts_y = get_parents(y)
samePrnt = 0

for x in prnts_x:
    if x in prnts_y:
        samePrnt = x
        break
    
if samePrnt:
    print(prnts_x.index(samePrnt) + prnts_y.index(samePrnt))
else:
    print(-1)