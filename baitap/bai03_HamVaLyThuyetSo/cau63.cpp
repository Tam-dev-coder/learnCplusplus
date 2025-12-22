#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

ll arr[1000001];
void fibo(ll n) {
    arr[1] = 0;
    arr[2] = 1;
    for(int i = 3; i <= n; i++) {
        arr[i] = (arr[i-1] % mod + arr[i - 2] % mod) % mod;
    }
    
}



int main () {
	int n; cin >> n;
    fibo(n);
    cout << arr[n];
}