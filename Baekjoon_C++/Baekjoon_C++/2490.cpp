#include <iostream>

int main() {
	int input;
	for (int i = 0; i < 3; i++) {
		int cnt = 0;
		for (int j = 0; j < 4; j++) {
			scanf_s("%d", &input);
			if (input) cnt++;
		}
		if (cnt == 4) printf("E\n");
		else printf("%c\n", 'D' - cnt);
	}
	return 0;
}