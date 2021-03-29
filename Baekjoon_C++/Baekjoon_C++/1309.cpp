#include <iostream>
using namespace std;

int main() {
	int memoi[2][3] = { {1,1,1}, }, now = 0, N;
	cin >> N;
	while (N--) {
		memoi[!now][0] = (memoi[now][1] + memoi[now][2]) % 9901;
		memoi[!now][1] = (memoi[now][0] + memoi[now][2]) % 9901;
		memoi[!now][2] = (memoi[now][0] + memoi[now][1] + memoi[now][2]) % 9901;
		now = !now;
	}
	cout << memoi[now][2];
}