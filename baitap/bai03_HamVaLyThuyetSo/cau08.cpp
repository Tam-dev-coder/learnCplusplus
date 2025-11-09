#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool ngto(ll n) {
    for(int i = 2; i <= sqrt(n); i++) {
        if( n % i == 0) return false;
    }
    return n > 1;
}

int main () {
	int n; cin >> n;
    for(int i = 2; i <= sqrt(n); i++) {
        if(ngto(i)) cout << i*i << " ";
    }
}