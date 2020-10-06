#include <iostream>
using namespace std;
int main() {
    int testNum, height, width, num;
	cin >> testNum;
    while(testNum--) {
        cin >> height >> width >> num;
		cout << (--num%height)*100 + num/height+101 << '\n';
    }
    return 0;
}
