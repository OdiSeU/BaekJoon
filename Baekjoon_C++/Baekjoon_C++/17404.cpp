#include <iostream>
#include <algorithm>
#include <vector>
#define MAX 1234567
using namespace std;

void setNext(int* dp, int* now) {
	int tmp[3] = {
		min(dp[1], dp[2]) + now[0],
		min(dp[0], dp[2]) + now[1],
		min(dp[0], dp[1]) + now[2]
	};
	dp[0] = tmp[0]; dp[1] = tmp[1]; dp[2] = tmp[2];
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	int N, rgb[3];
	cin >> N >> rgb[0] >> rgb[1] >> rgb[2];
	int dpR[3] = { rgb[0], MAX, MAX };
	int dpG[3] = { MAX, rgb[1], MAX };
	int dpB[3] = { MAX, MAX, rgb[2] };
	for (int i = 1; i < N - 1; i++) {
		cin >> rgb[0] >> rgb[1] >> rgb[2];
		setNext(dpR, rgb);
		setNext(dpG, rgb);
		setNext(dpB, rgb);
	}
	cin >> rgb[0] >> rgb[1] >> rgb[2];
	rgb[0] += min(min(dpG[1], dpG[2]), min(dpB[1], dpB[2]));
	rgb[1] += min(min(dpR[0], dpR[2]), min(dpB[0], dpB[2]));
	rgb[2] += min(min(dpR[0], dpR[1]), min(dpG[0], dpG[1]));
	cout << min(rgb[0], min(rgb[1], rgb[2]));
}