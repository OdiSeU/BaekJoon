#include <iostream>
#include <vector>
using namespace std;

int max(int a, int b) { return a > b ? a : b; }

int main() {
	int N;
	cin >> N;
	vector<int> cards(N+1), memoi(N+1, 0);
	for (int i = 1; i <= N; i++) {
		cin >> cards[i];
		for (int j = 0; j < i; j++)
			memoi[i] = max(memoi[i], memoi[j] + cards[i - j]);
	}
	cout << memoi[N];
}