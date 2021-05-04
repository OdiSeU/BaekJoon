#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
bool btns[10] = { 0, };
int minClick, len, channel;

int getClickCnt(int n) {
	return abs(channel - n) + to_string(n).length();
}

void bruteForce(int now) {
	if (to_string(now).length() > len + 1) return;
	minClick = min(getClickCnt(now), minClick);
	for (int i = 0; i < 10; i++) {
		if (!btns[i]) bruteForce(now * 10 + i);
	}
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	int x, M, small, big;
	cin >> channel >> M;
	len = to_string(channel).length();
	minClick = abs(channel - 100);
	while (M--) {
		cin >> x;
		btns[x] = 1;
	}
	if (!btns[0]) minClick = min(channel + 1, minClick);
	for (int i = 1; i < 10; i++) if (!btns[i]) bruteForce(i);
	cout << minClick;
}