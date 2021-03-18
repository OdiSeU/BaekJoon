#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N, now, x = 0, next = 1;
	cin >> N;
	vector<int> memoi(N + 1);
	for (int i = 1; i <= N; i++) {
		if (i == next) {
			memoi[i] = 1;
			x++;
			now = x * x;
			next = (x + 1) * (x + 1);
		}
		else {
			memoi[i] = i;
			for (int j = x, y = j * j; j > 0; j--, y = j * j) {
				if (memoi[y] + memoi[i - y] < memoi[i])
					memoi[i] = memoi[y] + memoi[i - y];
			}
		}
	}
	cout << memoi[N];
}