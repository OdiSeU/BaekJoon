#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
	int before, next, diff;
	cin >> before >> next;
	diff = next - before;
	for(int i=2; i<8; i++) {
		before = next;
		cin >> next;
		if(diff!=next-before) {
			diff = 0;
			break;
		}
	}
	if(diff == 1) cout << "ascending";
	else if(diff == 0) cout << "mixed";
	else cout << "descending";
	
	return 0;
}
