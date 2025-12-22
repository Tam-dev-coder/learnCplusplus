#include <bits/stdc++.h>
using namespace std;
#define ll long long


bool uocle(ll n) {
    ll c = sqrt(n);
    if(c * c == n) return true;
    else return false;
}


int main () {
    ll n; cin >> n;
    if(uocle(n)) cout << "YES";
    else cout << "NO";
	
}