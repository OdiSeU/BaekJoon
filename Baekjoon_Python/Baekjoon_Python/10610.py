a = input()
if sum(map(int, a)) % 3 == 0 and '0' in a:
    print(''.join(sorted(a, reverse=True)))
else:
    print(-1)