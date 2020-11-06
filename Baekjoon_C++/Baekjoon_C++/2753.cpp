#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
	int input;
	cin >> input;
	
	if(input%400==0) cout << 1;
	else if(input%100==0) cout << 0;
	else if(input%4==0) cout << 1;
	else cout << 0;
	
	return 0;
}
