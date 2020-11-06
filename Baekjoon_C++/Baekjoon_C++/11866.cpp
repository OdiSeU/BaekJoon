#include <iostream>
#include <queue>

int main() {
	int n, k;
	std::cin >> n >> k;
	std::cout << '<';
	std::queue<int> people;

	for (int i = 0; i < n; i++) people.push(i + 1);
	while (!people.empty()) {
		for (int i = 0; i < k - 1; i++) {
			int now = people.front();
			people.pop();
			people.push(now);
		}
		std::cout << people.front();
		people.pop();
		if (!people.empty()) std::cout << ", ";
	}
	std::cout << '>';

	return 0;
}