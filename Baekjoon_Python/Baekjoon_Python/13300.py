import sys, math

N, K = map(int, input().split())
students = dict()

for x in sys.stdin.readlines():
    students[x] = (students.get(x) or 0) + 1

print(sum(map(lambda x: math.ceil(x/K), students.values())))