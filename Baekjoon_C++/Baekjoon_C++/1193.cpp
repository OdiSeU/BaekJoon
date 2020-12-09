#include <iostream>
using namespace std;

int main() {
	int X, n = 1;
	cin >> X;
	while (X - n > 0) X -= n++;
	if (n & 1) cout << n - X + 1 << '/' << X;
	else cout << X << '/' << n - X + 1;
	  
	return 0;
}