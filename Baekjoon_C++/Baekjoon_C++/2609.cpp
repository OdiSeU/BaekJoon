#include <iostream>
using namespace std;

int calcGCD(int a, int b) {
	while(b>0){
		int tmp = b;
		b = a%b;
		a = tmp;
	}
	return a;
}

int calcLCM(int a, int b) {
	return a*b/calcGCD(a,b);
}

int main() {
	int a, b;
	cin >> a >> b;
	cout << calcGCD(a,b) << '\n' << calcLCM(a,b);
	return 0;
}
