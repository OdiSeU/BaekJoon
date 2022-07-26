import sys

def to_upper(line):
    x = line.strip()
    return x[0].upper() + x[1:]

input()
print('\n'.join(map(to_upper, sys.stdin.readlines())))