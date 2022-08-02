import sys

answer = []

for case in sys.stdin.readlines()[:-1]:
    L, P, V = map(int, case.split())
    x = (V // P) * L + min(V % P, L)
    answer.append(f'Case {len(answer)+1}: {x}')

print('\n'.join(answer))