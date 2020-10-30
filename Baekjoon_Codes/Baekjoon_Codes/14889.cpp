#include <iostream>
#include <vector>
using	namespace std;

vector<vector<int>> matStat;
int people = 0;
vector<pair<int, int>> teamCases;

void getTeamCases(int from, int pick, int cnt) {
	if (cnt == 0) {
		teamCases.push_back({ pick, people ^ pick });
		return;
	}
	for (int i = from; i < people; i = i<<1) {
		if (people & i) {
			getTeamCases(i << 1, pick ^ i, cnt - 1);
		}
	}
}

int getTeamStat(int team) {
	int sum = 0, n = 1, m = 1;
	for (int i = 0; i < matStat.size(); i++, n = n << 1) {
		if (team & n) continue;
		for (int j = i + 1, m = n << 1; j < matStat[i].size(); j++, m = m << 1) {
			if (team & m) continue;
			sum += matStat[i][j] + matStat[j][i];
		}
	}
	return sum;
}

int main() {
	int N, min = 40000;
	scanf_s("%d", &N);
	for (int i = 0; i < N; i++) {
		matStat.push_back(vector<int>());
		people = (people << 1) + 1;
		for (int j = 0; j < N; j++) {
			matStat[i].push_back(0);
			scanf_s("%d", &matStat[i][j]);
		}
	}
	getTeamCases(1, people, N/2);
	for (int i = 0; i < teamCases.size(); i++) {
		int subStat = (int)abs(getTeamStat(teamCases[i].first) - getTeamStat(teamCases[i].second));
		if (subStat < min) min = subStat;
	}
	printf("%d", min);

	return 0;
}