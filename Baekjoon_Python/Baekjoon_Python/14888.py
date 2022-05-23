N = int(input())
nums = list(map(int, input().split()))
oper = [
    lambda x,y:x+y,
    lambda x,y:x-y,
    lambda x,y:x*y,
    lambda x,y:(-1 if x < 0 else 1)*(abs(x)//y)
    ]
oprts = list(map(int, input().split()))
result_min = 1234567890
result_max = -1234567890

def solution(x, depth):
    global result_min, result_max
    if depth == N:
        result_min = min(result_min, x)
        result_max = max(result_max, x)
        return
    for i in range(4):
        if oprts[i] > 0:
            oprts[i] -= 1
            solution(oper[i](x,nums[depth]), depth+1)
            oprts[i] += 1

solution(nums[0], 1)

print(f'{result_max}\n{result_min}')