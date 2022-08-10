from collections import Counter
import sys

nums = list(map(int, sys.stdin.readlines()))
print(f'{sum(nums)//len(nums)}\n{Counter(nums).most_common(1)[0][0]}')