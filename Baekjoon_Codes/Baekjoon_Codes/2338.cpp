#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Bigint {
	int sign = 1;
	vector<int> num;
	string str;

	Bigint add(Bigint b) {
		if (sign != b.sign) return sub(b);
		int c = 0;
		string result;
		for (int i = num.size() - 1, j = b.num.size() - 1; i >= 0 && j >= 0; i--, j--) {
			int tmp = num[i] + b.num[j] + c;
			result = to_string(tmp % 10) + result;
			c = tmp / 10;
		}
		if (c > 0) result = to_string(c) + result;
		if (sign < 0) result = '-' + result;
		return Bigint(result);
	}

	Bigint sub(Bigint b) {
		if (sign == b.sign) return add(b);
		Bigint bigger, smaller;
		string result;
		if (compare(b)) {
			bigger = *this;
			smaller = b;
		}
		else {
			bigger = b;
			smaller = *this;
		}
		for (int i = smaller.num.size() - 1; i >= 0; i--) {
			int tmp = bigger.num[i] - smaller.num[i];
			if (tmp < 0) {
				bigger.num[i - 1]--;
				tmp += 10;
			}
			result = to_string(tmp) + result;
		}
		if (bigger.sign < 0) result = '-' + result;
		return Bigint(result);
	}

	Bigint mult(Bigint b) {

	}

	Bigint divide(Bigint b) {

	}

	bool compare(Bigint b) {
		if (str.size() != b.str.size()) return str.size() > b.str.size();
		else return str > b.str;
	}
public:
	Bigint() {}
	Bigint(string s) {
		str = s;
		int i = 0;
		if (s[0] == '-') {
			str = str.substr(1);
			sign = -1;
			i = 1;
		}
		while (i < s.size()) {
			num.push_back(s[i] - 48);
			i++;
		}
	}

	Bigint calc(char c, Bigint b) {

	}

	void print(char c) {
		bool chk = false;
		for (int i = 1; i < num.size(); i++) {
			if (!chk) {
				if (num[i] == 0) continue;
				else {
					chk = true;
					if (sign < 0) printf("-");
				}
			}
			printf("%d", num[i]);
		}
		if (!chk) printf("0");
		printf("%c", c);
	}
};

int main() {
	string input1, input2;
	cin >> input1 >> input2;
	Bigint a(input1), b(input2);
	a.print('\n');
	b.print('\n');
	a.add(b).print('\n');
	a.sub(b).print('\n');

	return 0;
}