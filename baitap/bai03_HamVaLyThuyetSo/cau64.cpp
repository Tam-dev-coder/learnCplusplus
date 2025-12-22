#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

ll arr[93];
bool fibo(ll n) {
    arr[1] = 0;
    arr[2] = 1;
    for(int i = 3; i <= 93; i++) {
        arr[i] = arr[i-1] + arr[i - 2];
    }
    for(int i = 1; i <= 93; i++) {
        if(arr[i] == n) return true;
    }
    return false;
    
}



int main () {
    ll n; cin >> n;
	if(fibo(n)) cout << "YES";
    else cout << "NO";
}