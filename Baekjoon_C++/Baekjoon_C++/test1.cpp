#include <iostream>
#include <string>
using namespace std;
int main() {
	long long N, now = 1, next1 = 0, next2 = 0;
	string route;
	cin >> N >> route;
	for (int i = 0; i < N - 1; i++) {
		if (route[i] == '1') {
			next1 += now;
			next2 = now;
		}
		now = next1;
		next1 = next2;
		next2 = 0; // ¤Ì¤Ì
	}

	cout << now;

	return 0;
}