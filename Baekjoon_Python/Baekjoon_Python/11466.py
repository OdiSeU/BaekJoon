a, b = map(int, input().split())
w, h = min(a, b), max(a, b)
if 3 * w <= h:
    print(w)
elif 1.5 * w <= h:
    print(h / 3)
else:
    print(w / 2)