#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007


int tongcs(ll n) {
    int sum = 0;
    while(n) {
        sum += n%10;
        n /= 10;
    }
    return sum;
}


ll arr[93];
ll fibo(ll n) {
    arr[1] = 1;
    arr[2] = 1;
    for(int i = 3; i <= 93; i++) {
        arr[i] = arr[i-1] + arr[i - 2];
    }
   
}



int main () {
    ll n; cin >> n; 
    cout << fibo(n);
}