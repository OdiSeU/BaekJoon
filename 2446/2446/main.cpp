#include <iostream>

int main() {
	short n, step = 1, i = 0;
	std::cin >> n;

	while (i >= 0) {
		std::cout.width(i + 1);
		for (short j = 0; j < (n - i) * 2 - 1; j++) {
			std::cout << '*';
		}
		std::cout << '\n';
		if (i == n-1) step *= -1;
		i += step;
	}
	return 0;
}