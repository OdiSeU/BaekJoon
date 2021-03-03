#include <iostream>
#include <vector>
#define MAX 1000001
using namespace std;

bool seive[MAX] = { 0, };
vector<int> primes;

void getPrime() {
	int i = 2;
	seive[0] = seive[1] = 1;
	for (; i * i < MAX; i++) {
		if (!seive[i]) {
			primes.push_back(i);
			for (int j = i * i; j < MAX; j += i) seive[j] = 1;
		}
	}
	for (; i < MAX; i++) {
		if (!seive[i]) primes.push_back(i);
	}
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	int T, N, cnt;
	getPrime();
	cin >> T;
	while (T--) {
		cnt = 0;
		cin >> N;
		for (int i = 0; primes[i] <= N / 2; i++) {
			if (!seive[N - primes[i]]) cnt++;
		}
		cout << cnt << '\n';
	}
}