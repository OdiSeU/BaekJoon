#include <iostream>
#include <string>
using namespace std;

int main() {
	string s = "";
	int n;
	cin >> n;
	if (!n) s = "0";
	while (n) {
		s = to_string(n & 1) + s;
		n = -(n >> 1);
	}
	cout << s;
}