#include <iostream>

int main() {
	short a, b, c;
	std::cin >> a >> b >> c;

	std::cout << (a + b) % c << '\n';
	std::cout << ((a % c) + (b % c)) % c << '\n';
	std::cout << (a * b) % c << '\n';
	std::cout << ((a % c) * (b % c)) % c;

	return 0;
}