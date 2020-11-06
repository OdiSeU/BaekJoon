#include <iostream>

int main() {
	short n, step = 1, i = 1;
	std::cin >> n;

	while (i > 0) {
		for (short j = 0; j < i; j++) {
			std::cout << '*';
		}
		std::cout.width(((int)n - i) * 2 + 1);
		for (short j = 0; j < i; j++) {
			std::cout << '*';
		}
		std::cout << '\n';
		if (i == n) step *= -1;
		i += step;
	}
	return 0;
}