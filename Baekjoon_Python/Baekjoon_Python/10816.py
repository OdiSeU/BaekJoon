_, cards = input(), list(input().split())
_, wants = input(), list(input().split())
counts = {}
for i in cards:
    try:
        counts[i] += 1
    except:
        counts[i] = 1
print(*[0 if not i in counts else counts[i] for i in wants])
