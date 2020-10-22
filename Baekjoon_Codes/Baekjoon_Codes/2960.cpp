#include <iostream>
#include <vector>

int main() {
	int N, K, idx=0, mult=2;
	std::vector<int> sieve;
	scanf_s("%d%d", &N, &K);
	for (int i = 0; i < N -1; i++) sieve.push_back(i + 2);
	while (1) {
		if (idx + 2 > N) {
			idx = 0;
			while (sieve[idx] == 0) mult = sieve[++idx];
		}
		if (sieve[idx] != 0) {
			if (K-- == 1) {
				printf("%d", sieve[idx]);
				break;
			}
		}
		sieve[idx] = 0;
		idx += mult;
	}

	return 0;
}