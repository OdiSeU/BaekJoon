#include <iostream>
#include <string>
using namespace std;

int main() {
	string N; int B;
	cin >> N >> B;
	cout << stoi(N, nullptr, B);
}