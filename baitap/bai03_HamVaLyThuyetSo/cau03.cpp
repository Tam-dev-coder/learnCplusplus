#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool ngto(ll n)  {
   
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) return false;
    }
    return n > 1;
}



int main () {
	 int a[1001];
    int t; cin >> t;
    for(int i = 1; i <= t; i++) {
         cin >> a[i];
    }
    for(int i = 1; i <= t; i++) {
    if(ngto(a[i])) cout << "YES" << endl;
    else cout << "NO" << endl;
    }
    
}