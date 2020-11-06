#include <iostream>

int main() {
	int r1, c1, r2, c2;
	scanf_s("%d%d%d%d", &r1, &c1, &r2, &c2);
	printf("%d", r1 * c1 + r2 * c2);
	return 0;
}