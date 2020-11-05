#include <iostream>

int main() {
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		int n;
		scanf_s("%d", &n);
		sum += n < 40 ? 40 : n;
	}
	printf("%d", sum / 5);

	return 0;
}