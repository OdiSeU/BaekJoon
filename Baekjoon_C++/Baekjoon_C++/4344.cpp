#include <iostream>
#include <vector>

int main() {
	int c, n;
	scanf_s("%d", &c);
	while (c--) {
		scanf_s("%d", &n);
		int sum = 0, cnt = 0;
		double avg;
		std::vector<int> score(n);
		for (int i = 0; i < n; i++) {
			scanf_s("%d", &score[i]);
			sum += score[i];
		}
		avg = (double)sum / n;
		for (int i = 0; i < n; i++) {
			if (score[i] > avg) cnt++;
		}
		printf("%.3f%%\n", (double)cnt * 100 / n);
	}
	return 0;
}