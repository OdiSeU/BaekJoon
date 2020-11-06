#include <iostream>

int main() {
	short n;
	std::cin >> n;
	for (int i = n; i > 0; i--) {
		std::cout.width(n - i + 1);
		for (int j = 1; j <= (2 * i - 1); j++) {
			std::cout << '*';
		}
		std::cout << '\n';
	}
	return 0;
}