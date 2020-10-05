#include <iostream>

int n, cnt = 0, arr[20];

void findCase(int from, int tgNum)  {
	if (tgNum == arr[from]) cnt++;
	if (from == n - 1) return;
	findCase(from + 1, tgNum - arr[from]);
	findCase(from + 1, tgNum);
}

int main() {
	int tgNum;
	std::cin >> n >> tgNum;

	for (int i = 0; i < n; i++) {
		std::cin >> arr[i];
	}

	findCase(0, tgNum);
	std::cout << cnt;

	return 0;
}