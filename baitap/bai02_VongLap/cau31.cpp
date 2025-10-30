#include <bits/stdc++.h>
using namespace std;
int main () {
	int n; cin >> n;
    int giaithua = 1;
    double tong = 1;
    for(int i = 1; i <= n; i++) {
        giaithua *= i;
        tong += 1.0/giaithua;
    }
    cout << fixed << setprecision(2) << tong;
}


