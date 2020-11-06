#include <iostream>

int main() {
	short a, b;
	std::cin >> a >> b;
	
	std::cout << a * (b % 10) << '\n';
	std::cout << a * ((b / 10) % 10) << '\n';
	std::cout << a * (b / 100) << '\n';
	std::cout << a * b << '\n';

	return 0;
}