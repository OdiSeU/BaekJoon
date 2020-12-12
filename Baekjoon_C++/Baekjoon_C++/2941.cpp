#include <iostream>
#include <string>
using namespace std;
#define DICT_SIZE 8


int main() {
	string s, dict[DICT_SIZE] = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };
	int cnt = 0;
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'c' || s[i] == 'd' || s[i] == 'l' || s[i] == 'n' || s[i] == 's' || s[i] == 'z') {
			for (int j = 0; j < DICT_SIZE; j++) {
				if (s.substr(i, dict[j].length()) == dict[j]) {
					i += dict[j].length() - 1;
					break;
				}
			}
		}
		cnt++;
	}
	cout << cnt;
	return 0;
}