#include <iostream>

int main() {
	int T, a, b;
	scanf_s("%d", &T);
	while (T--) {
		int n = 1;
		scanf_s("%d%d", &a, &b);
		b = (b - 1) % 4 + 1;
		for (int i = 0; i < b; i++) {
			n = (n * a) % 10;
		}
		printf("%d\n", n == 0 ? 10 : n);
	}
	return 0;
}