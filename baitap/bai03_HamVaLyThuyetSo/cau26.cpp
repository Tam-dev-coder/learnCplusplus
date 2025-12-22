#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool prime(ll n) {
    if( n < 2) return false;
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) return false;    
    }
    return true;
}

bool shh(ll n) {
    for(int p = 2; p <= 33; p++) {
        if(prime(p)) {
            if(prime(pow(2, p)-1)) {
                if(pow(2,p-1) * (pow(2,p)-1) == n) return true;
            }
        }
    }
    return false;
}



int main () {
	ll n; cin >> n;
    if(shh(n)) cout << "YES";
    else cout << "NO";
}