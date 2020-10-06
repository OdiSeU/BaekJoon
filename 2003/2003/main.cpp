#include <iostream>

int main() {
	int n, tgNum, cnt = 0, sum = 0, from = 0, arr[10000];
	std::cin >> n >> tgNum;

	for (int i = 0; i < n; i++) {
		std::cin >> arr[i];
		sum += arr[i];
		while (sum > tgNum) sum -= arr[from++];
		if (sum == tgNum) cnt++;
	}

	std::cout << cnt;
	return 0;
}