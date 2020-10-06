#include <iostream>
#include <vector>
using namespace std;

vector<int> solution(int a, int b, int c) {
	int result = a * b * c;
	vector<int> nCnt(10);

	while (result) {
		nCnt[result % 10]++;
		result /= 10;
	}
	return  nCnt;
}

int main(int argc, char* argv[]) {
	int a, b, c;
	cin >> a >> b >> c;
	vector<int> result = solution(a, b, c);

	for (int i = 0; i < result.size(); i++) {
		cout << result[i] << '\n';
	}

	return 0;
}