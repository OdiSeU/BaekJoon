#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
	int index, max=0;
	for(int i=0; i<10; i++) {
		int input;
		cin >> input;
		if(input > max) {
			max = input;
			index = i+1;
		}
	}
	cout << max << endl << index;
	
	return 0;
}
