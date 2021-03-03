#include <iostream>
#define MAX 1000001
using namespace std;
bool seive[MAX] = { 0, };

void checkPrime() {
	seive[0] = seive[1] = 1;
	for (int i = 2; i * i <= MAX; i++)
		if (!seive[i])
			for (int j = i * i; j <= MAX; j += i) seive[j] = 1;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	int n;
	checkPrime();
	while (1) {
		cin >> n;
		if (!n) break;
		for (int i = 3; i <= n / 2; i += 2) {
			if (!seive[i] && !seive[n - i]) {
				cout << n << " = " << i << " + " << n - i << '\n';
				break;
			}
		}
	}
}