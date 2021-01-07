import sys


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
        print(self.__nodes)
        top = self.__nodes[0]
        self.__nodes[0] = self.__nodes[-1]
        self.__nodes.pop()
        now = 0
        while True:
            left, right = now * 2 + 1, now * 2 + 2
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
heap = Heap()
N = int(input())
for i in range(N):
    v = int(input())
    if v:
        heap.push(v)
    else:
        print(heap.pop())
