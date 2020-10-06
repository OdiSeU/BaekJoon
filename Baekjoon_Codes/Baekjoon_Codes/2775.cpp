#include <iostream>
using namespace std;
int getPeopleNum(int floor, int room) {
	int num=0;
	if(floor==0) return room;
	if(room==1) return 1;
	if(room==2) return floor+2;
	for(int i=1; i<=room; i++) {
		num += getPeopleNum(floor-1, i);
	}
	return num;
}

int main() {
    int testNum, floor, room;
	cin >> testNum;
	while(testNum--) {
		cin >> floor >> room;
		cout << getPeopleNum(floor, room) << '\n';
	}
	return 0;
}
