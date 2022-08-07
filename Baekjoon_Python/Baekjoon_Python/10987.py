import re


p = re.compile('[aeiou]')
print(len(p.findall(input())))