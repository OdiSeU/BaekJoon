#include <iostream>
using namespace std;
int main() {
	char S[101];
	cin.getline(S, 101);
	for (int i = 0; i < 101; i++) {
		if ('a' <= S[i] && S[i] <= 'z') {
			S[i] = (S[i] - 'a' + 13) % 26 + 'a';
		}
		else if ('A' <= S[i] && S[i] <= 'Z') {
			S[i] = (S[i] - 'A' + 13) % 26 + 'A';
		}
	}
	cout << S;
}