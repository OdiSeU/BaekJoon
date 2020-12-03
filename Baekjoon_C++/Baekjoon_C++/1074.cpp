#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	int N, r, c, mult = 1, result = 0;
	cin >> N >> r >> c;
	while (r != 0 || c != 0) {
		result += mult * (((r & 1) << 1) + (c & 1));
		mult *= 4;
		r = r >> 1;
		c = c >> 1;
	}
	cout << result;
	return 0;
}