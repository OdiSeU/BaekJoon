#include <iostream>

int main() {
	int N;
	long long fact = 1;
	scanf_s("%d", &N);
	for (int i = 2; i <= N; i++) {
		fact *= i;
	}
	printf("%d", fact);
	return 0;
}