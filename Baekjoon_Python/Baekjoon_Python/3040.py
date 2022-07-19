import sys

nums = list(map(int, sys.stdin.readlines()))
total = sum(nums)

def find(nums):
    for i in range(8):
        for j in range(i+1, 9):
            if total - nums[i] - nums[j] == 100:
                del nums[j], nums[i]
                return nums

print('\n'.join(map(str, find(nums))))