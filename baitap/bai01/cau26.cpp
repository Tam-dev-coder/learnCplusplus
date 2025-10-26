#include <bits/stdc++.h>
using namespace std;
int main () {
	long long a, b, c, d;
    cin >> a >> b >> c >> d;
    long long nn = min({a, b, c, d});
    long long ln = max({a, b, c, d});
    cout << ln << " " << nn;
}