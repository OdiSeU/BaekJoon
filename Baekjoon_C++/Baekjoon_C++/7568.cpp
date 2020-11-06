#include <iostream>
#include <vector>
using namespace std;

struct Info {
	int weight, height, rank = 1;
};

int main() {
	int n, rank = 1;
	scanf_s("%d", &n);
	vector<Info> infoes;

	for (int i = 0; i < n; i++) {
		Info input;
		scanf_s("%d%d", &input.weight, &input.height);
		infoes.push_back(input);
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < infoes.size(); j++) {
			if (infoes[j].weight > infoes[i].weight && infoes[j].height > infoes[i].height)
				infoes[i].rank++;
		}
	}
	for (int i = 0; i < n; i++) printf("%d ", infoes[i].rank);

	return 0;
}