#include <iostream>
using namespace std;

int main() {
	int n, f0 = 0, f1 = 1, tmp;
	cin >> n;
	if (n == 0) cout << f0;
	else if (n == 1) cout << f1;
	else {
		for (int i = 2; i <= n; i++) {
			tmp = f1;
			f1 += f0;
			f0 = tmp;
		}
		cout << f1;
	}
	return 0;
}