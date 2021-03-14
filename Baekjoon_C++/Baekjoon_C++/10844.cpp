#include <iostream>
#include <string.h>
using namespace std;

int add(int a, int b) { return (a + b) % 1000000000; }

int main() {
	int arr1[10] = { 0, 1, 1, 1, 1, 1, 1, 1, 1, 1 }, arr2[10];
	int N, * tmp, *now = arr1, *next = arr2, sum = 0;
	cin >> N;
	while (--N) {
		memset(next, 0, sizeof(int)*10);
		next[0] = now[1];
		next[9] = now[8];
		for (int i = 1; i < 9; i++) {
			next[i] = add(now[i - 1], now[i + 1]);
		}
		tmp = now; now = next; next = tmp;
	}

	for (int i = 0; i < 10; i++) sum = add(sum, now[i]);
	cout << sum;
}