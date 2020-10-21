#include <iostream>
using namespace std;

int main() {
	int N, cnt=0;
	scanf_s("%d", &N);
	bool A[301][301], B[301][301];
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			scanf_s("%d", &A[i][j]);
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			scanf_s("%d", &B[i][j]);
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			for (int k = 0; k < N; k++) {
				if (A[i][k] & B[k][j]) {
					cnt++;
					break;
				}
			}
		}
	}
	printf("%d", cnt);

	return 0;
}