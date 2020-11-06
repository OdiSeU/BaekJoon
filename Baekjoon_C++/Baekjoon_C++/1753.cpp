#include <iostream>
#include <vector>
#include <queue>
using namespace std;
const int INF = 200001;

int main() {
	int v, e, start;
	scanf_s("%d%d%d", &v, &e, &start);
	start--;
	vector<vector<pair<int, int>>>weights(v);
	priority_queue<pair<int, int>,vector<pair<int,int>>, greater<pair<int,int>>> dist;
	vector<int> result(v, INF);

	while (e--) {
		int from, to, weight;
		scanf_s("%d%d%d", &from, &to, &weight);
		from--; to--;
		weights[from].push_back({ weight, to});
	}
	result[start ] = 0;
	dist.push({ 0, start });

	while (!dist.empty()) {
		pair<int, int> now = dist.top(); dist.pop();
		if (result[now.second] < now.first) continue;
		for (int i = 0; i < weights[now.second].size(); i++) {
			pair<int, int> next = weights[now.second][i];
			if (now.first + weights[now.second][i].first < result[next.second]) {
				result[next.second] = now.first + weights[now.second][i].first;
				dist.push({now.first + weights[now.second][i].first, next.second	});
			}
		}
	}

	for (int i = 0; i < v; i++) {
		if (result[i] == INF) printf("INF\n");
		else printf("%d\n",result[i]);
	}
	return 0;
}