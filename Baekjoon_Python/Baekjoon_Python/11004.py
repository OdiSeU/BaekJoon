_, K = map(int, input().split())
nums = {}

for x in map(int, input().split()):
    if x in nums:
        nums[x] += 1
    else:
        nums[x] = 1

for x in sorted(nums.keys()):
    K -= nums[x]
    if K <= 0:
        print(x)
        break