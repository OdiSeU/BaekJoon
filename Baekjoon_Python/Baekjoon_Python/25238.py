a, b = map(int, input().split())

print(0 if 100 <= a * (100 - b) * 0.01 else 1)