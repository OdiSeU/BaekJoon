a = dict(zip('ABC', sorted(map(int, input().split()))))
print(' '.join(map(lambda x:str(a[x]), input())))