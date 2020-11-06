#include <iostream>
using namespace std;
int main() {
    int a, b, c, max;
	cin >> a >> b >> c;
    while(a|b|c) {
        max = a > b ? a : (b > c ? b : c);
        if((a*a+b*b+c*c)==2*max*max) cout << "right"<<'\n';
        else cout << "wrong"<<'\n';
		cin >> a >> b >> c;
    }
    return 0;
}
