#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007


void pascal(ll n) {
    ll so = 1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            if(j == 0 || j == i) so = 1;
            else { 
            so = (so * (i - j + 1) / j) % MOD; 
            
            }
            cout << so << " ";
        }
        cout << endl;
    }
}


int main () {
ll n; cin >> n;
pascal(n);
	
}