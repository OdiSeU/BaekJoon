nums = []
for _ in range(5):
    nums.append(int(input()))

nums = sorted(nums)

print(f'{sum(nums)//5}\n{nums[2]}')