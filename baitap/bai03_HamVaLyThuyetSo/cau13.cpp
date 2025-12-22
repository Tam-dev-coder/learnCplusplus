#include <bits/stdc++.h>
using namespace std;
#define ll long long

int bacgiaithua(ll n, int p) {
    int sum = 0;
    for(int i = p; i <= n; i *= p) {
        sum += n/i;
    }
    return sum;
}



int main () {
	ll n; 
    int p;
    cin >> n >> p;
    cout << bacgiaithua(n, p);
}