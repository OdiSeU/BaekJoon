#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N, A;
    stack<pair<int, int>> stk;
    cin >> N;
    vector<int> seq(N), ngf(N, -1), cnts(1000001, 0);
    for (int i = 0; i < N; i++) {
        cin >> seq[i];
        cnts[seq[i]]++;
    }
    for (int i = 0; i < N; i++)
    {
        A = seq[i];
        while (stk.size() && cnts[stk.top().first] < cnts[A])
        {
            ngf[stk.top().second] = A;
            stk.pop();
        }
        stk.push({ A, i });
    }
    for (int i = 0; i < N; i++) {
        cout << ngf[i] << ' ';
    }
    return 0;
}