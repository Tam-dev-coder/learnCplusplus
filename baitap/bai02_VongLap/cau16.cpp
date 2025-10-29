#include <bits/stdc++.h>
using namespace std;
int main () {
	long long n; cin >> n;
    int dem = 0;
    if( n == 0) {
        cout << 1;
        return 0;
    }
    // for(; n != 0; n /= 10) {
    //     dem++;
    // }

    while(n != 0) {
        dem++;
        n /= 10;
    }
    cout << dem;
}