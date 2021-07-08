def num():
    return int(input())

def get_seq(a, b):
    return 'Fish At Constant Depth' if a == b else 'Fish Rising' if a < b else 'Fish Diving'

a, b, c, d = num(), num(), num(), num()
a, b, c = get_seq(a, b), get_seq(b, c), get_seq(c, d)
print(a) if a == b == c else print('No Fish')