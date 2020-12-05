#include <iostream>
using namespace std;

bool isHansu(int n) {
	int x, tmp = n % 10;
	if (n / 10 == 0) return true;
	n = n / 10;
	x = tmp - (n % 10);
	while (true) {
		tmp = n % 10;
		n = n / 10;
		if (n == 0) break;
		if (x != tmp - (n % 10)) return false;
		else x = tmp - (n % 10);
	}
	return true;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	int N, cnt = 0;
	cin >> N;
	for (int i = 1; i <= N; i++) if (isHansu(i)) cnt++;
	cout << cnt;
	return 0;
}