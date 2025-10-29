#include <bits/stdc++.h>
using namespace std;
int main () {
	long long a, b;
    cin >> a >> b;
    int t = min(a,b);
    long long cln = 1;
    for(int i = 1; i <= t; i++) {
       cln *= i;
    }
    cout << cln;
}