stack = []
post = []
for c in input():
    if c == '(':
        stack.append(c)
    elif c == ')':
        while stack and stack[-1] != '(':
            post.append(stack.pop())
        stack.pop()
    elif c == '*' or c == '/':
        while stack and (stack[-1] == '*' or stack[-1] == '/'):
            post.append(stack.pop())
        stack.append(c)
    elif c == '+' or c == '-':
        while stack and stack[-1] != '(':
            post.append(stack.pop())
        stack.append(c)
    else:
        post.append(c)

print(''.join(post + stack[::-1]))