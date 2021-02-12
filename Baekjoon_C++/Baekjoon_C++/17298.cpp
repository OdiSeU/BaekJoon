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
    vector<int> nge(N, 0);
    for (int i = 0; i < N; i++)
    {
        cin >> A;
        while (stk.size() && stk.top().first < A)
        {
            nge[stk.top().second] = A;
            stk.pop();
        }
        stk.push({ A, i });
    }
    for (int i = 0; i < N; i++) {
        cout << (nge[i] ? nge[i] : -1) << ' ';
    }
    return 0;
}