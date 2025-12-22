#include <bits/stdc++.h>
using namespace std;
#define ll long long


ll mangfibo[93];
bool checkfibo(ll n) {
    mangfibo[1] = 0;
    mangfibo[2] = 1;
    for(int i = 3; i <= 93; i++) {
        mangfibo[i] = mangfibo[i-1] + mangfibo[i-2];
    }
    for(int i = 1; i <= 93; i++) {
        if(n == mangfibo[i]) return true;
    }
    return false;
}



int main () {
    int t; cin >> t;
    while(t) {
        ll n; cin >> n;
        if(checkfibo(n)) cout << "YES";
        else cout << "NO";
    }

	
}