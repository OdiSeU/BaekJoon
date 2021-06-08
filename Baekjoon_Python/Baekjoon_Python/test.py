h, m, s = map(int, input().split())
t = int(input())

s += (t % 60)
m += ((t % 3600) // 60)
h += t // 3600

if s >= 60:
    m += 1
    s -= 60

if m >= 60:
    h += 1
    m -= 60

if h >= 24:
    h %= 24

print('{} {} {}'.format(h, m, s))