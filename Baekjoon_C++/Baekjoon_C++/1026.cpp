#include <iostream>
#include <algorithm>
using namespace std;

bool desc(int a, int b) {
	return a > b;
}

int main() {
	short n, a[50], b[50], c[50];
	int sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < n; i++) cin >> b[i];

	copy(b, b + n, c);
	sort(a, a + n);
	sort(c, c + n, desc);

	for (int i = 0; i < n; i++) sum += a[i] * c[i];
	cout << sum;

	return 0;
}