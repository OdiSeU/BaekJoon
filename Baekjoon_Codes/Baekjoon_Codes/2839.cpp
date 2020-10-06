#include <iostream>
using namespace std;

int main() {
	int kg,cnt=0;
	cin >> kg;
	while(kg%5){
		kg -= 3;
		cnt++;
	}
	if(kg<0) cnt = -1;
	else cnt += kg/5;
	
	cout << cnt;
	
	return 0;
}
