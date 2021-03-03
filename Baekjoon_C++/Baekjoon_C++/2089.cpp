#include <iostream>
using namespace std;

void f(int n) {
	if (n) {
		f(-(n >> 1));
		cout << (n & 1);
	}
}

int main() {
	int n;
	cin >> n;
	if (n) f(n);
	else cout << '0';
}