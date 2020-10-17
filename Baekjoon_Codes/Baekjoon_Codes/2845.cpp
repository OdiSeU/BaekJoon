#include <iostream>

int main() {
	int L, P, sum;
	scanf_s("%d%d", &L, &P);
	sum = L * P;
	for (int i = 0; i < 5; i++) {
		int input;
		scanf_s("%d", &input);
		printf("%d ", input - sum);
	}
	return 0;
}