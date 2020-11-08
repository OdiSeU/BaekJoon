#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int sum = 0;
	int heights[9];
	for (int i = 0; i < 9; i++) {
		cin >> heights[i];
		sum += heights[i];
	}
	for (int i = 0; i < 8; i++) {
		for (int j = i + 1; j < 9; j++) {
			int left = sum - heights[i] - heights[j];
			if (left == 100) {
				heights[i] = heights[j] = 0;
				sort(heights, heights + 9);
				for (int i = 2; i < 9; i++) {
					cout << heights[i] << '\n';
				}
				return 0;
			}
		}
	}
	return 0;
}