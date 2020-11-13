#include <iostream>

#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

long long solution(int n, vector<int> times) {
    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> endTimes;
    for (int i = 0; i < times.size(); i++) {
        endTimes.push({ times[i], i });
    }
    while (--n) {
        pair<long long, int> top = endTimes.top();
        endTimes.pop();
        top.first += times[top.second];
        endTimes.push(top);
    }
    return endTimes.top().first;
}

int main() {
    int n = 6;
    vector<int> times = { 7, 10 };
    cout << solution(n, times);
}