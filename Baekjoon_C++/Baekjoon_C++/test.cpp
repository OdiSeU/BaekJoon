#include <iostream>
#include <string>
#include <queue>
using namespace std;
int main() {
	string from = "00:00", to = "23:59", a, b, c;
	int N;
	cin >> N;
	while (N--) {
		cin >> a >> b >> c;
		if (from < a) from = a;
		if (c < to) to = c;
	}
	if (from <= to) cout << from << " ~ " << to << '\n';
	else cout << -1;
}