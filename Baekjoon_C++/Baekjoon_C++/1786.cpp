#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> getPi(string& s) {
    int begin = 1, comp = 0, len = s.length();
    vector<int> pi(len, 0);

    while (begin + comp < len) {
        if (s[begin + comp] == s[comp]) {
            pi[begin + comp - 1] = ++comp;
        }
        else if (comp == 0) begin++;
        else {
            begin += comp - pi[comp - 1];
            comp = pi[comp - 1];
        }
    }
    return pi;
}

vector<int> KMP(string& from, string& find) {
    int fromLen = from.length(), findLen = find.length();
    vector<int> result, pi = getPi(find);
    int begin = 0, comp = 0;
    while (begin + findLen <= fromLen) {
        if (comp < findLen && from[begin + comp] == find[comp]) {
            comp++;
            if (comp == findLen) result.push_back(begin);
        }
        else if (comp == 0) begin++;
        else {
            begin += comp - pi[comp - 1];
            comp = pi[comp - 1];
        }
    }
    return result;
}

int main() {
    string T, P;
    getline(cin, T);
    getline(cin, P);
    vector<int> kmp = KMP(T, P);
    cout << kmp.size() << '\n';
    for (int i = 0; i < kmp.size(); i++) {
        cout << kmp[i] + 1 << ' ';
    }
}