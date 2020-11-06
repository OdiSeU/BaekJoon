#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, max = 0;
	scanf_s("%d", &n);
	vector<int> treeNum;

	for (int i = 0; i < n; i++) {
		int left, right;
		for (int j = 0; j < i + 1; j++) {
			int input;
			treeNum.push_back(0);
			scanf_s("%d", &input);
			if (treeNum.size() == 1) treeNum[j] = input;
			else {
				if (j == 0) {
					left = treeNum[j];
					treeNum[j] += input;
				}
				else {
					right = treeNum[j];
					treeNum[j] = left + input > right + input ? left + input : right + input;
					if (treeNum[j] > max) max = treeNum[j];
					left = right;
				}
			}
		}
	}

	printf("%d", max);

	return 0;
}