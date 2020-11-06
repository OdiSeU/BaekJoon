#include<iostream>

int main() {
	int N, M, K;
	scanf_s("%d%d%d", &N, &M, &K);
	printf("%d %d", K / M, K % M);

	return 0;
}