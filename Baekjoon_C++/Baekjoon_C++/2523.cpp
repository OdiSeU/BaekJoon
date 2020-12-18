#include <iostream>
using namespace std;

int main() {
	int N, sign = 1;
	scanf_s("%d", &N);
	for (int i = 1; i > 0; i += sign) {
		for (int j = 0; j < i; j++) printf("*");
		printf("\n");
		if (i == N) sign = -1;
	}
	return 0;
}