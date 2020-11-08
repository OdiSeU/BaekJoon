#include <iostream>
#include <string>
#include <list>
using namespace std;

int main() {
	int T;
	char enter;
	scanf_s("%d%c", &T, &enter);
	list<char> result;
	while (T--) {
		list<char>::iterator cursor = result.begin();
		while (true) {
			char c;
			scanf_s("%c", &c);
			if (c == '\n') break;
			switch (c) {
			case '<':
				if (cursor != result.begin()) cursor--;
				break;
			case '>':
				if (cursor != result.end()) cursor++;
				break;
			case '-':
				if (cursor != result.begin()) cursor = result.erase(--cursor);
				break;
			default:
				result.insert(cursor, c);
			}
		}
		while (!result.empty()) {
			printf("%c", result.front());
			result.pop_front();
		}
		printf("\n");
	}
	return 0;
}