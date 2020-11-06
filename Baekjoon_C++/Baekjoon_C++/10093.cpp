#include <iostream>

int main() {
	long long A, B;
	int cnt;
	scanf_s("%lld%lld", &A, &B);
	if (B < A) std::swap(A, B);
	printf("%lld\n", A==B ? 0 : B - A - 1);
	for (A++; A < B; A++) printf("%lld ", A);

	return 0;
}