answer = i = 0

input()
for x in input():
    a = ord(x) - ord('a') + 1
    r = 31 ** i
    i += 1
    answer = (a * r + answer) % 1234567891

print(answer)