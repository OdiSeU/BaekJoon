#include <iostream>
using namespace std;

int binoCoef(int optionNum, int chooseNum) {
	int num=1, deno=1; // 분자, 분모
	for(int i=1; i<=optionNum; i++) {
		if(i<=chooseNum) deno*=i;
		if(i>optionNum - chooseNum) num*=i;
	}
	return num / deno;
}

int main() {
	int optionNum, chooseNum;
	cin >> optionNum >> chooseNum;
	cout << binoCoef(optionNum, chooseNum) << '\n';
	return 0;
}
