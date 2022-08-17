import sys

cf2017 = {0:0, 1:500, 3:300, 6:200, 10:50, 15:30, 21:10}
cf2018 = {0:0, 1:512, 3:256, 7:128, 15:64, 31:32}

def get_money(n, cf):
    for x, money in cf.items():
        if n <= x:
            return money
    return 0

answer = []

input()
for s in sys.stdin.readlines():
    n2017, n2018 = map(int, s.split())
    money = get_money(n2017, cf2017) + get_money(n2018, cf2018)
    answer.append(str(money*10000))

print('\n'.join(answer))
    