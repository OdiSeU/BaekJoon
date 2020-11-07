#include <iostream>
#include <string>
using namespace std;

class Input {
private:
	int cursor = 0;
	string text = "";
	void onKeyDown(char c) {
		switch (c) {
		case '<':
			cursor = cursor - 1 < 0 ? 0 : cursor - 1;
			break;
		case '>':
			cursor = cursor + 1 > text.size() ? text.size() : cursor + 1;
			break;
		case '-':
			if (cursor > 0) text.erase(--cursor, 1);
			break;
		default:
			text.insert(text.begin() + cursor++, c);
		}
	};
public:
	string parseLog(string s) {
		for (int i = 0; i < s.size(); i++) {
			onKeyDown(s[i]);
		}
		return text;
	};
};

int main() {
	int T;
	cin >> T;
	while (T--) {
		string str;
		Input input;
		cin >> str;
		cout << input.parseLog(str) << '\n';
	}

	return 0;
}