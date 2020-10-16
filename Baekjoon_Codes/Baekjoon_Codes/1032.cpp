#include <iostream>

int main() {
	int n;
	char pattern[51];
	std::cin >> n >> pattern;
	
	while (--n) {
		int i = 0;
		char file[51];
		std::cin >> file;
		while (file[i] != '\0') {
			if (pattern[i] != file[i]) pattern[i] = '?';
			i++;
		}
	}
	std::cout << pattern;
	return 0;
}