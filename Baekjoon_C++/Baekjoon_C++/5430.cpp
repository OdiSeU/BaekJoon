#include <iostream>
#include <list>
#include <string>
using	 namespace std;

bool isR = false;

bool funcResult(list<short>* arr, string func) {
	for (int i = 0; i < func.size(); i++) {
		if(func[i] == 'R') isR = !isR;
		if (func[i] == 'D') {
			if (arr->empty()) return false;
			if (isR) arr->pop_back();
			else arr->pop_front();
		}
	}
	return true;
}

short getNow(list<short>* arr) {
	short now;
	if (isR) {
		now = arr->back();
		arr->pop_back();
	}
	else {
		now = arr->front();
		arr->pop_front();
	}
	return now;
}

int main() {
	ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);
	int T;
	cin >> T;
	while (T--) {
		int n;
		isR = false;
		string func, arrStr, num = "";
		cin >> func >> n >> arrStr;
		list<short> arr;
		for (int i = 1; i < arrStr.size() - 1; i++) {
			if (arrStr[i] == ',') {
				arr.push_back(stoi(num));
				num = "";
			}
			else num += arrStr[i];
		}
		if(num.size()) arr.push_back(stoi(num));
		if (funcResult(&arr, func)) {
			cout << '[';
			if (!arr.empty()) {
				cout << getNow(&arr);
				while (!arr.empty()) {
					cout << ',' << getNow(&arr);
				}
			}
			cout << "]\n";
		}
		else cout << "error\n";
	}
	return 0;
}