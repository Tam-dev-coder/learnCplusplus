#include <bits/stdc++.h>
using namespace std;
#define ll long long

int tonguoc(ll n) {
    int sum = 0;
    for(int  i = 1; i <= sqrt(n); i++) {
        if(n % i == 0) {
        sum += i;
        if( i != n/i) sum += n/i;
        }
    }
    return sum;
}




int main () {
    ll n; cin >> n;
    cout << tonguoc(n);
	
}