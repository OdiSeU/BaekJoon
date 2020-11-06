#include <iostream>
#include <queue>
using namespace std;

int main() {
	queue<int> cqueue;
	int N, M, minCnt = 0;
	scanf_s("%d%d", &N, &M);
	for (int i = 1; i <= N; i++) cqueue.push(i);
	while (M--) {
		int num, moveCnt = 0;
		scanf_s("%d", &num);
		while (cqueue.front() != num) {
			int item = cqueue.front();
			moveCnt++;
			cqueue.pop();
			cqueue.push(item);
		}
		minCnt += moveCnt < cqueue.size() - moveCnt ? moveCnt : cqueue.size() - moveCnt;
		cqueue.pop();
	}
	printf("%d", minCnt);

	return 0;
}