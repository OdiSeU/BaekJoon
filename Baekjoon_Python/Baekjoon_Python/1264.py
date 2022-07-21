import sys, re

p = re.compile('[aiueoAIUEO]')
print('\n'.join(map(lambda x: str(len(p.findall(x))),sys.stdin.readlines()[:-1])))