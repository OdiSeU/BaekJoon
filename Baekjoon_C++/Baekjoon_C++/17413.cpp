#include <iostream>
#include <string>
using namespace std;

int main() {
	int i = 0;
	string S, tmp, ans = "";
	getline(cin, S);
	while (i < S.length()) {
		if (S[i] == '<') {
			do {
				cout << S[i++];
			} while (S[i - 1] != '>');
		}
		else {
			tmp = "";
			while (i < S.length() && S[i] != ' ' && S[i] != '<') tmp = S[i++] + tmp;
			if (S[i] == ' ')  tmp += S[i++];
			cout << tmp;
		}
	}
	return 0;
}