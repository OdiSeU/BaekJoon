#include <iostream>

int main() {
	int n, tgNum, min, cnt = 0, sum = 0, from = 0, arr[100000];
	std::cin >> n >> tgNum;
	min = n;
	for (int i = 0; i < n; i++) {
		std::cin >> arr[i];
		sum += arr[i];
		cnt++;
		while (sum >= tgNum) {
			min = min < cnt ? min : cnt;
			sum -= arr[from++];
			cnt--;
		}
	}
	if (from == 0 && sum < tgNum) min = 0;
	std::cout << min;
	return 0;
}