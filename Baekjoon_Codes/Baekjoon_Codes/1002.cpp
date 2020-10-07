#include <iostream>
#include <cmath>

int main() {
	int t;
	float x1, y1, r1, x2, y2, r2, dist;
	std::cin >> t;
	while (t--) {
		std::cin >> x1 >> y1 >> r1;
		std::cin >> x2 >> y2 >> r2;
		if (r1 < r2) {
			float tmp = r1;
			r1 = r2;
			r2 = tmp;
		}
		dist = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
		if (dist <= r2) {
			if (x1 == x2 && y1 == y2 && r1 == r2) std::cout << "-1\n";
			else if (dist + r2 == r1) std::cout << "1\n";
			else if (dist + r2 < r1) std::cout << "0\n";
			else if (dist + r2 > r1) std::cout << "2\n";
		}
		else {
			if (dist > r1 + r2) std::cout << "0\n";
			else if (dist == r1 + r2) std::cout << "1\n";
			else if (dist < r1 + r2) std::cout << "2\n";
		}
	}
	return 0;
}