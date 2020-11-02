#include <iostream>

int main() {
	int T;
	scanf_s("%d", &T);
	while (T--) {
		int N, M;
		double cases = 1;
		scanf_s("%d%d", &N, &M);
		for (int i = 0; i < N; i++) {
			cases = cases * (M - i) / (i + 1);
		}
		printf("%d\n", (long)cases);
	}

	return 0;
}