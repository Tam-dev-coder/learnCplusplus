#include <bits/stdc++.h>
using namespace std;
#define ll long long

long long  chinhphuong(ll a, ll b) {
    ll c = sqrt(a), d = sqrt(b);
    if(c * c < a) ++c;
    ll e = d - c + 1;
    return e;
        
}



int main () {
	ll a, b;
    cin >> a >> b;
    cout << chinhphuong(a, b);
}