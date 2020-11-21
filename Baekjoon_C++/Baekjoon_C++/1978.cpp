#include <iostream>
#include <cmath>
using namespace std;

int isPrime(int n) {
	int check = 1, m = (int)sqrt(n);
	if (n == 1) return 0;
	for (int i = 2; i <= m; i++) {
		if (n % i == 0) {
			check = 0;
			break;
		}
	}
	return check;
}

int main() {
	int N, cnt = 0;
	scanf_s("%d", &N);
	while (N--) {
		int input;
		scanf_s("%d", &input);
		cnt += isPrime(input);
	}
	printf("%d", cnt);
	return 0;
}