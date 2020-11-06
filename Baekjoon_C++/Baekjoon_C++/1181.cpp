#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

bool mySort(string str1, string str2) {
	if (str1.size() == str2.size()) {
		return str1 < str2;
	}
	else {
		return str1.size() < str2.size();
	}
}

int main() {
	int n;
	vector<string> words;
	string now;
	cin >> n;
	while (n--) {
		string input;
		cin >> input;
		words.push_back(input);
	}
	sort(words.begin(), words.end(), mySort);
	for (int i = 0; i < words.size(); i++)
	{
		if (now ==words[i]) continue;
		else {
			now = words[i];
			cout << words[i] << '\n';
		}
	}

	return 0;
}