#include <iostream>
using namespace std;

int max(int a, int b) { return a > b ? a : b; }

int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	int n, memoi, num;
	cin >> n >> memoi;
	int sum = memoi;
	while (--n) {
		cin >> num;
		memoi = max(memoi + num, num);
		sum = max(sum, memoi);
	}
	cout << sum;
}