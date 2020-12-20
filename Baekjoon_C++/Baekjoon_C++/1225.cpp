#include <iostream>
#include <string>
using namespace std;

int main() {
	string A, B;
	bool isA = true;
	long long sum = 0;
	cin >> A >> B;
	for (int i = 0; i < A.length(); i++) {
		for (int j = 0; j < B.length(); j++) {
			sum += (A.at(i) - '0') * (B.at(j) - '0');
		}
	}
	cout << sum;

	return 0;
}