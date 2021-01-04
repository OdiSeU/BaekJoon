import sys
import time
from queue import Queue

def toOne(n):
    if n < 2: return 0
    return min(toOne(n//2) + n%2, toOne(n//3) + n%3)+1

sys.stdout.write(str(toOne(int(sys.stdin.readline()))))

# def toOne(n):
#     if n < 2: return 0
#     return min(toOne(n//2) + n%2, toOne(n//3) + n%3)+1
#
# def toOne2(n):
#     memoi = [0] * (N + 1)
#
#     for i in range(2, N + 1):
#         memoi[i] = memoi[i - 1] + 1
#         if i % 2 == 0:
#             memoi[i] = min(memoi[i // 2] + 1, memoi[i])
#         if i % 3 == 0:
#             memoi[i] = min(memoi[i // 3] + 1, memoi[i])
#     return memoi[n]
#
# def toOne3(n):
#     visited = [0] * (n + 1)
#     que = Queue()
#     que.put([n, 0])
#     while not que.empty():
#         now = que.get()
#         if now[0] == 1:
#             return now[1]
#         if not visited[now[0]-1]:
#             visited[now[0] - 1] = 1
#             que.put([now[0] - 1, now[1] + 1])
#         if now[0] % 2 == 0 and not visited[now[0] // 2]:
#             visited[now[0] // 2] = 1
#             que.put([now[0] // 2, now[1] + 1])
#         if now[0] % 3 == 0 and not visited[now[0] // 3]:
#             visited[now[0] // 3] = 1
#             que.put([now[0] // 3, now[1] + 1])
#
# memo = {0:0,1:0}
# def toOne4(n):
#     if n not in memo: memo[n] = min(toOne(n//2) + n%2, toOne(n//3) + n%3)+1
#     return memo[n]
#
#
# N = int(sys.stdin.readline())
#
# start = time.time()
# sys.stdout.write(str(toOne(N))+' ')
# print(time.time()-start)
#
# start = time.time()
# sys.stdout.write(str(toOne2(N))+' ')
# print(time.time()-start)
#
# start = time.time()
# sys.stdout.write(str(toOne3(N))+' ')
# print(time.time()-start)
#
# start = time.time()
# sys.stdout.write(str(toOne4(N))+' ')
# print(time.time()-start)