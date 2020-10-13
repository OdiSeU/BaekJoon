#include <iostream>
#include <vector>
using namespace std;

class MinHeap {
private:
	vector<int> heap;
	int getParent(int idx) {
		return (idx - 1) / 2;
	};
	int getLChild(int idx) {
		idx = idx * 2 + 1;
		return idx < heap.size() ? idx : -1;
	}
	int getRChild(int idx) {
		idx = idx * 2 + 2;
		return idx < heap.size() ? idx : -1;
	}
	void swap(int idx1, int idx2) {
		int tmp = heap[idx1];
		heap[idx1] = heap[idx2];
		heap[idx2] = tmp;
	}
public:
	void push(int value) {
		heap.push_back(value);
		int now = heap.size() - 1;
		while (now != 0) {
			if (heap[now] >= heap[getParent(now)]) break;
			swap(now, getParent(now));
			now = getParent(now);
		}
	};
	int pop() {
		if (heap.size() == 0) return 0;
		int least = heap.front();
		heap.front() = heap.back();
		heap.pop_back();
		int now = 0;
		while (getLChild(now) != -1) {
			int less;
			if (getRChild(now) == -1) less = getLChild(now);
			else less = heap[getLChild(now)] < heap[getRChild(now)] ? getLChild(now) : getRChild(now);
			if (heap[now] < heap[less]) break;
			swap(less, now);
			now = less;
		}

		return least;
	}
};

int main() {
	MinHeap minHeap;
	int n;
	cin >> n;
	while (n--) {
		int input;
		scanf("%d", &input);
		if (input == 0) printf("%d\n",minHeap.pop());
		else minHeap.push(input);
	}
	return 0;
}