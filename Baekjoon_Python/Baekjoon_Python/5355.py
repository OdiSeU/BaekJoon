import sys

cmd = {'@':lambda x:x*3, '%':lambda x:x+5, '#':lambda x:x-7}
answers = []
input()

for x in sys.stdin.readlines():
    x = x.split()
    result = float(x[0])
    for i in x[1:]:
        result = cmd[i](result)
    answers.append(f'{result:.2f}')

print('\n'.join(answers))