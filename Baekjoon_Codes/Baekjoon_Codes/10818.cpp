#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
	int nums, input, min=1000000, max=-1000000;
	cin >> nums;
	while(nums--) {
		cin >> input;
		if(input < min) min = input;
		if(max < input) max = input;
	}
	cout << min << " " << max;
}
