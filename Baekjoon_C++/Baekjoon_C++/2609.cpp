#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b;
	int x = a, y = b;
	while (y > 0) {
		c = x % y;
		x = y;
		y = c;
	}
	cout << x << '\n' << a * b / x << '\n';
}