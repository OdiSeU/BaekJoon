#include <iostream>


int main() {
	int sum, more, a;
	scanf_s("%d%d", &sum, &more);
	a = (sum - more) / 2;
	printf("%d\n%d", a + more, a);
	return 0;
}