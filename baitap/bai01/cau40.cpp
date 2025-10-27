#include <bits/stdc++.h>
using namespace std;
int main () {
	int x; cin >> x;
    int tien;
    if( x >= 1000) tien = 4500 * x + 1200000;
    else if( x >= 800) tien = 3900 * x + 900000;
    else if( x >= 500) tien = 3700 * x + 800000;
    else tien = 3300 * x;
    cout << tien;
}