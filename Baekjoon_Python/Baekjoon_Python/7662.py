import sys, heapq

class Heap:
    def __init__(self):
        self.__nodes = []

    def size(self):
        return len(self.__nodes)

    def push(self, value):
        self.__nodes.append(value)
        now = self.size() - 1
        while now:
            parent = now // 2
            if self.__nodes[now] > self.__nodes[parent]:
                self.__nodes[now], self.__nodes[parent] = self.__nodes[parent], self.__nodes[now]
                now //= 2
            else:
                break

    def pop(self):
        if self.size() == 0:
            return 0
        top = self.__nodes[0]
        self.__nodes[0] = self.__nodes[-1]
        self.__nodes.pop()
        now = 0
        while True:
            left, right = now * 2 + 1, now * 2 + 2
            bigger = 0
            if self.size() <= left:
                break
            elif self.size() <= right:
                bigger = left
            elif self.__nodes[left] < self.__nodes[right]:
                bigger = right
            else:
                bigger = left

            if self.__nodes[now] < self.__nodes[bigger]:
                self.__nodes[now], self.__nodes[bigger] = self.__nodes[bigger], self.__nodes[now]
                now = bigger
            else:
                break
        return top

input = sys.stdin.readline
pq = []
N = int(input())
for i in range(N):
    M = int(input())
    for j in range(M):
        e, v = input().split()
        v = int(v)
        if e == 'I':
            heapq.heappush(pq, v)
        elif pq:
            if v > 0:
                pq.remove(max(pq))
            else:
                heapq.heappop(pq)
    if pq:
        print(max(pq), pq[0])
    else:
        print('EMPTY')
