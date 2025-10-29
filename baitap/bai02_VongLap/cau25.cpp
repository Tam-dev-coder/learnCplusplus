#include <bits/stdc++.h>
using namespace std;
int main () {
	int n; cin >> n;
    double s = 1;
    double p = 1;
    for(int i = 1; i < n ; i++) {
       p = p * i;
       s = s + 1.0/p;
    }
    cout << fixed << setprecision(4) << s;
}