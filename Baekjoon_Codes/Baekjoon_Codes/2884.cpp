#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
	int hour, minute;
	cin >> hour >> minute;
	minute -= 45;
	if(minute < 0) {
		hour = (hour+23)%24;
		minute += 60;
	}
	
	cout << hour << " " << minute;
	
	return 0;
}
