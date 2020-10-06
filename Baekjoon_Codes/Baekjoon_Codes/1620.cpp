#include <iostream>
#include <string>
#include <list>
using namespace std;

int findPokeIdx(string* pokeArr, int pokeNum, string pokeName) {
	list<string> pokeList;
	for (int i = 0; i < pokeNum; i++) {
		if(pokeArr[i][0]==pokeName[0]) pokeList.push_back(pokeArr[i]);
	}
	for (int i = 1; i < pokeName.size(); i++) {
		list<string>::iterator iter = pokeList.begin();
		while (iter != pokeList.end()) {
			if(pokeList[iter][i] != pokeName[i])
		}
	}
}

int main() {
	int pokeNum, questNum;
	cin >> pokeNum >> questNum;
	string* pokeArr = new string[pokeNum];
	for (int i = 0; i < pokeNum; i++) {
		cin >> pokeArr[i];
	}

	while (questNum--) {
		bool isString = false;
		int pokeIdx;
		string input;
		cin >> input;
		try {
			pokeIdx = stoi(input);
		}
		catch (...) {
			isString = true;
		}

		if (isString) {
			cout << findPokeIdx(pokeArr, pokeNum, input) << '\n';
		}
		else {
			cout << pokeArr[pokeIdx] << '\n';
		}
	}

	return 0;
}
