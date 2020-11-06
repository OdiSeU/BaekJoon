#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {
	int testNum;
	string str;
	cin >> testNum;
	while(testNum--) {
		int sum=0, score=0;
		cin >> str;
		for(int i=0; i<str.size(); i++) {
			if(str[i]=='O') sum += ++score;
			else score=0;
		}
		cout << sum << endl;
	}
}
