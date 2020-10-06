#include <iostream>
using namespace std;
int main() {
    int input, roomCnt=0;
	cin >> input;
	
	input--;
	roomCnt++;
	while(input>0) {
		input -= (++roomCnt-1) * 6;
	}
	cout << roomCnt;
	return 0;
}
