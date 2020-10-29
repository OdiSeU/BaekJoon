#include <iostream>
#include <string>
using namespace std;

int indexOf(string str) {
	string colors[10] = { "black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white" };
	for (int i = 0; i < 10; i++)
	{
		if (str == colors[i]) return i;
	}
	return -1;
}

int main() {
	int num = 0;
	string s1, s2, s3;
	cin >> s1 >> s2 >> s3;
	num = indexOf(s1) * 10 + indexOf(s2);
	cout << num;
	if (num > 0) {
		for (int i = 0; i < indexOf(s3); i++)
		{
			cout << '0';
		}
	}
	
	return 0;
}