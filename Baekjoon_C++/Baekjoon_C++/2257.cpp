#include <iostream>
#include <string>
using namespace std;

string s;
int idx = 0;

int getMass(char c) {
	switch (c) {
	case 'H': return 1;
	case 'C': return 12;
	case 'O': return 16;
	default: return 0;
	}
}

int calcMass() {
	int mass = 0, bf = 0;
	while (idx < s.length()) {
		char now = s[idx++];
		if ('0' <= now && now <= '9') bf *= (now - '0');
		mass += bf;
		if (now == '(') { bf = calcMass(); continue; }
		else if (now == ')') return mass;
		bf = getMass(now);
	}
	mass += bf;
	return mass;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	cin >> s;
	cout << calcMass();
	return 0;
}