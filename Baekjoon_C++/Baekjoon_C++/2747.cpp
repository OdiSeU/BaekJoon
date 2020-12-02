#include <iostream>
using namespace std;

int main() {
	int n, f1 = 0, f2 = 1, result, tmp;
	cin >> n;
	if (n == 0) f2 = f1;
	else if (n != 1) {
		for (int i = 2; i <= n; i++) {
			tmp = f2;
			f2 = f1 + f2;
			f1 = tmp;
		}
	}
	cout << f2;
	return 0;
}