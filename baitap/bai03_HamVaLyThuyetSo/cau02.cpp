#include <bits/stdc++.h>
using namespace std;
#define ll long long


void sang(int n) {
    int a[n+1];
    for(int i  = 0; i <= n; i++) {
        a[i] = 1;
    }
    a[0] = a[1] = 0;
    for(int i = 2; i <= sqrt(n); i++) {
        if(a[i] == 1) {
            for(int j = i * i; j <= n; j += i) {
                a[j] = 0;
            }
        }
    }
    for(int  i = 2; i <= n; i++) {
        if(a[i]) cout << i << " ";
    }
}



int main () {
    int n; cin >> n;	
    sang(n);
}