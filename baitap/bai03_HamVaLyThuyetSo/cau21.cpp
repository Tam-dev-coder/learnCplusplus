#include <bits/stdc++.h>
using namespace std;
#define ll long long

void  chinhphuong(ll a, ll b) {
    ll c = sqrt(a), d = sqrt(b);
    if(c * c < a) ++c;
    for(int i = c; i <= d; i++) {
        cout << i * i;
}

}


int main () {
	ll a, b;
    cin >> a >> b;
    chinhphuong(a, b);
}