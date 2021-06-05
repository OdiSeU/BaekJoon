def time_to_sec(t):
    h, m, s = map(int, t.split())
    return h * 3600 + m * 60 + s


def sec_to_time(s):
    s %= 24 * 3600
    t = str(s % 60)
    s //= 60
    t = f'{s%60} {t}'
    s //= 60
    t = f'{s} {t}'
    return t

time = input()
sec = int(input())
print(sec_to_time(time_to_sec(time) + sec))