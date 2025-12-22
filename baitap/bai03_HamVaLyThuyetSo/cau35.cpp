#include <bits/stdc++.h>
using namespace std;
#define ll long long


ll gcd(ll a, ll b) {
    if(b == 0) return a;
    return gcd(b, a%b);
}

ll bcln(ll a, ll b) {
    return a/gcd(a, b)*b;
}

int main () {
	int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << " " << bcln(a, b);
}