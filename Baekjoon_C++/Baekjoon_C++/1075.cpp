#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); std::cin.tie(NULL); std::cout.tie(NULL);
	int N, F;
	cin >> N >> F;
	cout.width(2); cout.fill('0');
	cout << (F - ((N / 100 * 100) % F)) % F;
	return 0;
}