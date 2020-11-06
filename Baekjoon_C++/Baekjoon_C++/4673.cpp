#include <iostream>

bool seive[10001] = { false, };

int nextNum(int n) {
	int t = n;
	while (t) {
		n += t % 10;
		t /= 10;
	}
	return n;
}

void checkNum(int n) {
	while (n <= 10000) {
		seive[n] = true;
		n = nextNum(n);
	}
}

int main() {
	int n = 1;
	while (n <= 10000) {
		printf("%d\n", n);
		checkNum(n);
		while (seive[n]) {
			n++;
			if (n > 10000) break;
		}
	}
	return 0;
}