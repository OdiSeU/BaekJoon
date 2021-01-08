_ = input()
times = sorted(list(map(int, input().split())))
print(sum([times[i]*(len(times)-i) for i in range(len(times))]))