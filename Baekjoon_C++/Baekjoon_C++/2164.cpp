#include <iostream>
using namespace std;

int main() {
	int N, i = 2;
	cin >> N;
	while (i < N) i = i << 1;
	cout << (N == 1 ? 1 : i - (i - N) * 2);
	return 0;
}