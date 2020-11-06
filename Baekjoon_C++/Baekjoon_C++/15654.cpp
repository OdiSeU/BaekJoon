#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> picked;

void pickNumbers(vector<int> nArr, int cnt) {
	if (cnt == 0) {
		for (int i = 0; i < picked.size(); i++) {
			printf("%d ", picked[i]);
		}
		printf("\n");
	}
	else {
		for (int i = 0; i < nArr.size(); i++) {
			if (nArr[i]) {
				int num = nArr[i];
				nArr[i] = 0;
				picked.push_back(num);
				pickNumbers(nArr, cnt -1);
				nArr[i] = num;
				picked.pop_back();
			}
		}
	}
}

int main() {
	int N, M;
	scanf_s("%d%d", &N, &M);
	vector<int> nArr;
	for (int i = 0; i < N; i++) {
		int num;
		scanf_s("%d", &num);
		nArr.push_back(num);
	}
	sort(nArr.begin(), nArr.end());
	pickNumbers(nArr, M);

	return 0;
}