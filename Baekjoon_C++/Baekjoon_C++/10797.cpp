#include <iostream>
using namespace std;

int main() {
	int date, car, cnt = 0;
	cin >> date;
	for (int i = 0; i < 5; i++) {
		cin >> car;
		if (date == car) cnt++;
	}
	cout << cnt;
	return 0;
}