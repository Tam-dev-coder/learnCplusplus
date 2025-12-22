#include <bits/stdc++.h>
using namespace std;
#define ll long long

int locphat(ll n) {
    while(n) {
        int t = n%10;
        if(t != 0 && t != 6 && t != 8) return false;
        n /= 10;
    }
    return true;

}



int main () {
	ll n; cin >> n;
    if(locphat(n)) cout << 1;
    else cout << 0;
}