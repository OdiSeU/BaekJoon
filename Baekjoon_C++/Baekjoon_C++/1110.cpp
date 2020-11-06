#include <iostream>

int main() {
	int n, input, cnt = 0;
	std::cin >> input;
	n = input;
	do {
		n = n % 10 * 10 + ((n / 10 + n % 10) % 10);
		cnt++;
	} while (input != n);
	std::cout << cnt;
	return 0;
}