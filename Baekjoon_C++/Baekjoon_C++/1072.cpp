#include <iostream>
using namespace std;

int main() {
	long long X, Y, Z;
	int low = 0, high = 1000000000, mid, ans;
	cin >> X >> Y;
	Z = (Y * 100) / X;
	if (Z >= 99) ans = -1;
	else {
		while (low <= high) {
			mid = (low + high) / 2;
			if (Z >= ((Y + mid) * 100) / (X + mid)) {
				ans = mid + 1;
				low = mid + 1;
			}
			else high = mid - 1;
		}
	}
	cout << ans;
	return 0;
}