#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {
	int length, sum=0;
	string num;
	cin >> length >> num;
	for(int i=0; i<length; i++) {
		sum += num[i] - '0';
	}
	cout << sum;
	return 0;
}
