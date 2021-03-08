#include <iostream>
#include <string>
using namespace std;

void cvtNum(int num, int to) {
	if (num) {
		cvtNum(num / to, to);
		cout << num % to << ' ';
	}
}

int main() {
	int A, B, m, n;
	string s;
	cin >> A >> B >> m;
	while (m--) {
		cin >> n;
		s.push_back(n < 10 ? n + '0' : (n - 10) + 'A');
	}
	cvtNum(stoi(s, nullptr, A), B);
}