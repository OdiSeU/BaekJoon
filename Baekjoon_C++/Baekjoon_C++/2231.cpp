#include <iostream>

int calc(int n) {
	int num = n;
	while (n) {
		num += n % 10;
		n /= 10;
	}
	return num;
}

int main() {
	int N, ans = 0;
	scanf_s("%d", &N);
	for (int i = N/10; i < N; i++) {
		if (calc(i) == N) {
			ans = i;
			break;
		}
	}
	printf("%d", ans);
	return 0;
}