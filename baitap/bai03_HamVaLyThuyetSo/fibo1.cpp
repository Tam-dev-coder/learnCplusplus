#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

ll arr[93];
void fibo(int n) {
    arr[1] = 1;
    arr[2] = 1;
    for(int i = 3; i <= 93; i++) {
        arr[i] = arr[i-1] + arr[i - 2];
    }
    
}



int main () {
   int n; cin >> n;
   fibo(n);
   for(int i = 1; i <= n; i++) {
    cout << arr[i] << endl;
   }
   
}