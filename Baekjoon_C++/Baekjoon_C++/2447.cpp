#include <iostream>

void makeHole(char** patern, short r, short c, short n) {
	short aThird = n / 3;
	if (aThird <= 0) return;
	for (short i = aThird; i < aThird * 2; i++) {
		for (short j = aThird; j < aThird * 2; j++) {
			patern[r + i][c + j] = ' ';
		}
	}
	for (short i = 0; i < 3; i++) {
		for (short j = 0; j < 3; j++) {
			if (i == 1 && j == 1) continue;
			makeHole(patern, r + aThird * i, c + aThird * j, aThird);
		}
	}
}

int main() {
	short n;
	std::cin >> n;

	char** patern = new char* [n];
	for (short i = 0; i < n; i++) {
		patern[i] = new char [n];
		for (short j = 0; j < n; j++) {
			patern[i][j] = '*';
		}
	}
	makeHole(patern, 0, 0, n);
	
	for (short i = 0; i < n; i++) {
		for (short j = 0; j < n; j++) {
			std::cout << patern[i][j];
		}
		std::cout << '\n';
	}
	
	return 0;
}