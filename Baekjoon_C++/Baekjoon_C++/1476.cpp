#include <iostream>
using namespace std;

int mod(int a, int b) { return (a - 1) % b + 1; }

int main() {
	int E, S, M, e, m, ans;
	cin >> E >> S >> M;
	e = mod(S, 15);
	m = mod(S, 19);
	ans = S; 
	while (e != E || m != M) {
		e = mod(e + 28, 15);
		m = mod(m + 28, 19);
		ans += 28;
	}
	cout << ans;
}