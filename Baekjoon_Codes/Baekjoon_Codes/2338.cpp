#include <iostream>
#include <string>
using namespace std;

void add(string a, string b) {
	short c = 0;
	for (int i = b.size()-1; i >= 0; i--) {
		for (int j = a.size() - 1; j >= 0; j--) {
			
		}
	}
}

void sub(string a, string b) {

}

void mult(string a, string b) {

}

void print(string num) {
	for (int i = 0; i < num.size(); i++) cout << num[i];
	cout << '\n';
}

int main() {
	string a, b, add = "", sub = "", mult = "";
	getline(cin, a); getline(cin, b);
	if (a[0] == '-' ^ b[0] == '-') {
		if (a.size() < b.size()) {

		}
		else if (a.size() == b.size()) {
			if(a[0] > b[0])
		}
	}

	return 0;
}