#include <bits/stdc++.h>
using namespace std;
int main () {
	int a, b, c, d;
    cin >> a >> b >> c >> d;
    int q = b/a;
    if(b * q == c && c * q == d) cout << "YES";
    else cout << "NO";
}