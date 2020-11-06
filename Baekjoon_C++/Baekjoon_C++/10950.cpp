#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
	int testNum, num1, num2;
	cin >> testNum;
	while(testNum--) {
		cin >> num1 >> num2;
		cout << num1+num2 << endl;
	}
	
	return 0;
}
