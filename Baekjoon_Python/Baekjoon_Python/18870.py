_, X = input(), list(map(int, input().split()))
sorted_X = sorted(list(set(X)))
dict_X = {sorted_X[i]:i for i in range(len(sorted_X))}
print(*(dict_X[i] for i in X))