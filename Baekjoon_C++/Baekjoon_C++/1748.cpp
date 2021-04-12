#include <iostream>
using namespace std;

int main() {
	int N, sum = 0, cnt, i;
	cin >> N;
	for (cnt = i = 1; i * 10 <= N; i *= 10, cnt++) {
		sum += 9 * i * cnt;
	}
	sum += (N - i + 1) * cnt;
	cout << sum;
}