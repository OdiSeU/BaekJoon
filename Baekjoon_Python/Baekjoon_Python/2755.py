def round(n):
    n = int(n * 1000)
    if n % 10 > 4:
        n += 10
    return (n // 10) / 100

N = int(input())
score = 0
credit = 0
ranks = {
    'A+': 4.3, 'A0': 4.0, 'A-': 3.7,
    'B+': 3.3, 'B0': 3.0, 'B-': 2.7,
    'C+': 2.3, 'C0': 2.0, 'C-': 1.7,
    'D+': 1.3, 'D0': 1.0, 'D-': 0.7,
    'F': 0.0
}
for _ in range(N):
    name, mult, rank = input().split()
    score += int(mult) * ranks[rank]
    credit += int(mult)
print('%.2f'%round(score / credit))
