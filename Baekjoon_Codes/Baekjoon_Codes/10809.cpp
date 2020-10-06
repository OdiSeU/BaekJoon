#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {
	int alphaIdx[26] = {-1,};
	string str;
	cin >> str;
	for(int i=0; i<26; i++) {
		int index = str.find('a'+i);
		cout << (index==std::string::npos ? -1 : index) << " ";
	}
	return 0;
}
