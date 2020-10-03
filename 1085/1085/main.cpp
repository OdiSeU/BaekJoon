#include <iostream>
using namespace std;

int min(int x, int y) {
	return x < y ? x : y;
}
int solution(int x, int y, int w, int h) {
	return min(min(x, w - x), min(y, h - y));
}

int main(int argc, char* argv[]) {
	int x, y, w, h;
	cin >> x >> y >> w >> h;

	cout << solution(x, y, w, h);

	return 0;
}