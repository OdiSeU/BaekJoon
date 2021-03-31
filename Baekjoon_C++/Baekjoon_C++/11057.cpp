#include <iostream>
using namespace std;

int main() {
	int N, memoi[10] = {1,};
	cin >> N;
	for (int i = 0; i <= N; i++) for (int j = 1; j < 10; j++)
		memoi[j] = (memoi[j] + memoi[j - 1]) % 10007;
	cout << memoi[9];
}