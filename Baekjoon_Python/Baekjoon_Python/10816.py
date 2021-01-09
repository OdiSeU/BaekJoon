_, cards = input(), list(input().split())
_, wants = input(), list(input().split())
counts = {}
for i in cards:
    if i in counts:
        counts[i] += 1
    else:
        counts[i] = 1
print(*[0 if not i in counts else counts[i] for i in wants])