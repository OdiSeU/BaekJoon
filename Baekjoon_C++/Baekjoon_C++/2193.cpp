#include <iostream>
using namespace std;

int main() {
	long long memoi[2] = { 0, 1 }, tmp;
	int N;
	cin >> N;
	for (int i = 1; i < N; i++) {
		tmp = memoi[0];
		memoi[0] += memoi[1];
		memoi[1] = tmp;
	}
	cout << memoi[0] + memoi[1];
}