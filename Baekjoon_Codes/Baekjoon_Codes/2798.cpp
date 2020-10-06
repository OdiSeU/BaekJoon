#include <iostream>
using namespace std;


int main(int argc, char* argv[]) {
	int cardNum, cutline, max=0;
	cin >> cardNum >> cutline;
	int* cardArr = new int[cardNum];
	for(int i=0; i<cardNum; i++) {
		cin >> cardArr[i];
	}
	
	for(int cd1=0; cd1<cardNum-2; cd1++) {
		for(int cd2=cd1+1; cd2<cardNum-1; cd2++) {
			for(int cd3=cd2+1; cd3<cardNum; cd3++) {
				int sum = cardArr[cd1]+cardArr[cd2]+cardArr[cd3];
				if(max<sum && sum<=cutline) max = sum;
			}
		}
	}

	cout << max;
	return 0;
}
