#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool chinhphuong(ll n) {
    int b = sqrt(n);
    if(b * b == n) return true;
    return false;
}

int main () {
    ll n; cin >> n;
	if(chinhphuong(n)) cout << "YES";
    else cout << "NO";
}