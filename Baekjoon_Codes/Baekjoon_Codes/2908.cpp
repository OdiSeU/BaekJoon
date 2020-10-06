#include <iostream>
using namespace std;

int reverseNum(int num) {
	int result = 0;
	while(num) {
		result = result*10 + num%10;
		num /= 10;
	}
	return result;
}

int main(int argc, char* argv[]) {
	int num1, num2;
	cin >> num1 >> num2;
	
	num1 = reverseNum(num1);
	num2 = reverseNum(num2);
	
	cout << (num1 < num2 ? num2 : num1);
}
