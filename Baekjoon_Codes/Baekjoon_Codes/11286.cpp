#include <iostream>
#include <queue>
#include <vector>
using namespace std;

class AbsHeap {
private:
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> heap;
public:
	void push(int v) {
		heap.push({ (int)abs(v), v });
	}
	
	int pop() {
		if (heap.empty()) return 0;
		int v = heap.top().second;
		heap.pop();
		return v;
	}
};

int main() {
	AbsHeap absHeap;
	int N;
	scanf_s("%d", &N);
	while (N--) {
		int x;
		scanf_s("%d", &x);
		if (x == 0) printf("%d\n", absHeap.pop());
		else absHeap.push(x);
	}
	return 0;
}