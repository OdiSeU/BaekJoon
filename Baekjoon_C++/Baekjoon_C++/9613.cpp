#include <iostream>
#include <vector>
using namespace std;

int GCD(int a, int b) {
	int c;
	while (b > 0) {
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}

int main() {
	int t, n;
	long long sum;
	cin >> t;
	while (t--) {
		cin >> n;
		sum = 0;
		vector<int> nums(n);
		for (int i = 0; i < n; i++) {
			cin >> nums[i];
			for (int j = 0; j < i; j++) {
				sum += GCD(nums[i], nums[j]);
			}
		}
		cout << sum << '\n';
	}
}