#include <iostream>
#define MAX 1001
using namespace std;
bool seive[MAX] = { 0, };

void calcPrime() {
	seive[0] = 1;
	seive[1] = 1;
	for (int i = 2; i * i <= MAX; i++)
		if (!seive[i])
			for (int j = i * i; j <= MAX; j += i)
				seive[j] = 1;
}

int main() {
	int N, cnt = 0, num;
	cin >> N;
	calcPrime();
	for(int i = 0; i < N; i++) {
		cin >> num;
		cnt += seive[num];
	}
	cout << N - cnt;
	return 0;
}