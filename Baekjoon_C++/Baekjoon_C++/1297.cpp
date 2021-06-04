#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double d, h, w, n;
	cin >> d >> h >> w;
	n = sqrt(d * d / (h * h + w * w));
	cout << int(h * n) << ' ' << int(w * n);
}