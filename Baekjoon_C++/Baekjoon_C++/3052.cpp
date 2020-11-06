#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
	bool isExist[42] = {false,};
	int cnt=0;
	for(int i=0; i<10; i++) {
		int input;
		cin >> input;
		if(!isExist[input%42]) {
			isExist[input%42] = true;
			cnt++;
		}
	}
	cout << cnt;
}
