#include <iostream>
using namespace std;

int main() {
	int up, down, height;
	cin >> up >> down >> height;
	cout << (height-down-1)/(up-down)+1;
	
	return 0;
}
