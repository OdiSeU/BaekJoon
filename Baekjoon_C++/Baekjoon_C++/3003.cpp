#include <iostream>

int main() {
	int chess[] = {1, 1, 2, 2, 2, 8};
	for (int i = 0; i < 6; i++) {
		int have;
		scanf_s("%d", &have);
		printf("%d ",chess[i] - have);
	}
	return 0;
}