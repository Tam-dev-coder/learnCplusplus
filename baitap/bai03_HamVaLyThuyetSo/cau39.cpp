#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll hamf(ll n) {
    if(n % 2 == 0) return n/2;
    else {
        return -(n+1)/2;
    }
}



int main () {
	ll n; cin >> n;
    cout << hamf(n);
}