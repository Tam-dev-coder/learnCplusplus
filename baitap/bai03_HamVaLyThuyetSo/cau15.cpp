#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool sphenic(ll n) {
    ll ans = 0;
    for(int i = 2; i <= sqrt(n); i++) {
        
        if(n  % i == 0) {
        int cnt = 0;
            while(n) {
                n /= i;
                cnt++;
            }
        if(cnt > 2) return false;
        if(cnt == 1) ans++;
        }
        if(ans > 3) return false;
    }
    if(n != 1) ans++;
    if(ans == 3) return true;
    else return true;
}


int main () {
    ll n; cin >> n;
    if(sphenic(n)) cout << 1;
    else cout << 0;
	
}