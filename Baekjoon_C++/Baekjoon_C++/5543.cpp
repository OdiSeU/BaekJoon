#include <iostream>
using namespace std;
int main() {
	int minHam = 2000, minJu = 2000;
	for (int i = 0; i < 3; i++) {
		int v;
		cin >> v;
		if (minHam > v) minHam = v;
	}
	for (int i = 0; i < 2; i++) {
		int v;
		cin >> v;
		if (minJu > v) minJu = v;
	}
	cout << (minHam + minJu - 50);
}