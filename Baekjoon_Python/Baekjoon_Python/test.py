import sys


class Heap:
    def __init__(self):
        self.nodes = []

    def size(self):
        return len(self.nodes)

    def push(self, value):
        self.nodes.append(value)
        now = self.size() - 1
        while now:
            parent = now // 2
            if self.nodes[now] > self.nodes[parent]:
                self.nodes[now], self.nodes[parent] = self.nodes[parent], self.nodes[now]
                now = (now - 1) // 2
            else:
                break

    def pop(self):
        if self.size() == 0:
            return 0
        top = self.nodes[0]
        self.nodes[0] = self.nodes[-1]
        self.nodes.pop()
        now = 0
        while True:
            left, right = now * 2 + 1, now * 2 + 2
            bigger = 0
            if self.size() <= left:
                break
            elif self.size() <= right:
                bigger = left
            elif self.nodes[left] < self.nodes[right]:
                bigger = right
            else:
                bigger = left

            if self.nodes[now] < self.nodes[bigger]:
                self.nodes[now], self.nodes[bigger] = self.nodes[bigger], self.nodes[now]
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
