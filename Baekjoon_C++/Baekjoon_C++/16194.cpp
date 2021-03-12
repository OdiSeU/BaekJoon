#include <iostream>
#include <vector>
#define INF 123456789
using namespace std;

int min(int a, int b) { return a < b ? a : b; }

int main() {
	int N;
	cin >> N;
	vector<int> cards(N + 1), memoi(N + 1, INF);
	for (int i = 1; i <= N; i++) {
		cin >> cards[i];
		memoi[i] = cards[i];
		for (int j = 0; j < i; j++)
			memoi[i] = min(memoi[i], memoi[j] + cards[i - j]);
	}
	cout << memoi[N];
}