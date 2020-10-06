#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
	int num;
	cin >> num;
	
	for(int i=0; i<num; i++) {
		cout.width(num-i);
		for(int j=0; j<=i; j++) {
			cout << "*";
		}
		cout << endl;
	}
	
	return 0;
}
