import sys

def solution(nums):
    odd = list(filter(lambda x: x%2==0, map(int, nums.split())))
    return f'{sum(odd)} {min(odd)}'

input()
print('\n'.join(map(solution, sys.stdin.readlines())))