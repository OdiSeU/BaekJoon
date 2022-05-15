bf = ans = 0
for c in input():
    ans += 5 if bf == c else 10
    bf = c
print(ans)