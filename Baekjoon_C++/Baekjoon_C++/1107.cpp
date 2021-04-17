#include <iostream>
#include <string>
using namespace std;
bool btns[10] = { 0, };
int N, len;

int getNextNum(int i) {
	while (i < 10) {
		if (!btns[i]) break;
		i++;
	}
	return i > 9 ? -1 : i;
}

int getBeforeNum(int i) {
	while (i >= 0) {
		if (!btns[i]) break;
		i--;
	}
	return i < 0 ? -1 : i;
}

string initBig() {
	string big;
	if (getNextNum(1) >= 0) {
		big.push_back(getNextNum(1) + '0');
		for (int i = 0; i < len; i++) {
			big.push_back(getNextNum(0) + '0');
		}
	}
	else big = "1234567";
	return big;
}

int main() {
	int x;
	string channel, small = "0", big;
	cin >> channel >> N;
	while (N--) {
		cin >> x;
		btns[x] = 1;
	}
	N = stoi(channel); len = channel.length();
	big = initBig();
	cout << big;
}