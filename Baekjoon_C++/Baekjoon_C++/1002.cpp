#include <iostream>
#include <cmath>

int main() {
	int t;
	double x1, y1, r1, x2, y2, r2, dist;
	std::cin >> t;
	while (t--) {
		std::cin >> x1 >> y1 >> r1;
		std::cin >> x2 >> y2 >> r2;
		int point;
		if (r1 < r2) {
			double tmp = r1;
			r1 = r2;
			r2 = tmp;
		}
		dist = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
		if (dist == 0) {
			if (r1 == r2) point = -1;
			else point = 0;
		}
		else {
			if (dist < r1 + r2 && dist > r1 - r2) point = 2;
			else if (dist == r1 + r2 || dist == r1 - r2) point = 1;
			else point = 0;
		}
		std::cout << point << '\n';
	}
	return 0;
}