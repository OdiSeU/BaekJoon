#include <iostream>
using namespace std;

int main() {
	int dice[6] = { 0, };
	int dots, result = 0;
	pair<int, int> same = { 1,0 };
	for (int i = 0; i < 3; i++) {
		cin >> dots;
		if (same.first < ++dice[dots - 1]) {
			same = { dice[dots - 1],dots };
		}
		else if(same.first < 2 && same.second < dots) {
			same.second = dots;
		}
	}
	switch (same.first)
	{
	case 3:
		result = 10000 + same.second * 1000;
		break;
	case 2:
		result = 1000 + same.second * 100;
		break;
	case 1:
		result = same.second * 100;
		break;
	}
	cout << result;

	return 0;
}
