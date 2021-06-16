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

for _ in range(3):
    T = input().split()
    print(sec_to_time(time_to_sec(' '.join(T[3:])) - time_to_sec(' '.join(T[:3]))))