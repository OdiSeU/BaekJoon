#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	int N, min = 1000000, max = 0, m;
	cin >> N;
	while (N--) {
		cin >> m;
		if (min > m) min = m;
		if (max < m) max = m;
	}
	cout << min * max;
	return 0;
}