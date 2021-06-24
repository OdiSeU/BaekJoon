players = list(map(int, input().split()))
print(abs(sum(players) - 2 * (max(players) + min(players))))