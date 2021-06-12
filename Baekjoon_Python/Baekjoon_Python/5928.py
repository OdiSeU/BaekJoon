def timeTominutes(time):
    d, h, m = map(int, time.split())
    return (d * 24 + h) * 60 + m
t = timeTominutes(input()) - timeTominutes("11 11 11")
if t < 0:
    print(-1)
else:
    print(t)