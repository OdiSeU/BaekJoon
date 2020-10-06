#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
	int nums, stdNum, input;
	cin >> nums >> stdNum;
	while(nums--) {
		cin >> input;
		if(input < stdNum) cout << input << " ";
	}
	
	return 0;
}
