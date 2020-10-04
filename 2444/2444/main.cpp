#include <iostream>

int main() {
	short n, i = 1, step = 1;
	std::cin >> n;

	while (i > 0) {
		std::cout.width((int)n - i + 1);
		for (int j = 1; j <= (2 * i - 1); j++) {
			std::cout << '*';
		}
		std::cout << '\n';
		if (i == n) step *= -1;
		i += step;
	}
	
	return 0;
}