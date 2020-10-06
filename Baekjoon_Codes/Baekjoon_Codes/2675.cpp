#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
	int testNum;
	cin >> testNum;
	
	while(testNum--) {
		int repeat, idx=0;
		char str[21];
		cin >> repeat >> str;
		do {
			for(int i=0; i<repeat; i++) {
				cout << str[idx];
			}
		} while(str[++idx]!='\0');
		cout << endl;
	}
	
	return 0;
}
