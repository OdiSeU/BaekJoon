N, inord, postord = int(input()), list(input().split()), list(input().split())
in_dict = {inord[i]:i for i in range(N)}
preord = []

q = [[0, N-1, 0, N-1]]
while q:
    ix, iy, px, py = q.pop()
    now = postord[py]
    preord.append(now)
    mid = in_dict[now]
    size = mid - ix
    if iy > mid:
        q.append([mid+1, iy, px+size, py-1])
    if mid > ix:
        q.append([ix, mid-1, px, px+size-1])

print(' '.join(preord))