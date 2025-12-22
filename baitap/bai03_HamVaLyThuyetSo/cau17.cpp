#include <bits/stdc++.h>
using namespace std;
#define ll long long

int tsnt(int n) {
    int uoc = 0;
    for(int i = 2; i <= sqrt(n); i++) {
            while(n % i == 0) {
                n /= i;
                uoc = i;
            }
    }
    if( n > 1) uoc = n;
    return uoc;
}



int main () {
    int t, n;
    cin >> t;
    while(t) {
        cin >> n;
        cout << tsnt(n);
    }
    
	
}