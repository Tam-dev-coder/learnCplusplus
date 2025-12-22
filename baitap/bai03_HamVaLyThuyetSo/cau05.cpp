#include <bits/stdc++.h>
using namespace std;
#define ll long long

int prime[1000001];
void sang() {
    for(int i = 0; i <= 1000000; i++) {
        prime[i] = 1;
    }
    prime[0] = prime[1] = 0;
    for(int i = 2; i <= sqrt(1000000); i++) {
        if(prime[i]) {
            for(int j = i * i; j <= 1000000; j += i ) {
                    prime[j] = 0;
            }
        }
    }

}



int main () {
    int t; cin >> t;
    sang();
    while(t) {
        long long n; cin >> n;
        t--;
    for(int i = 2; i <= n/2; i++) {
    if(prime[i] && prime[n-i]) cout << i << " " << n-i << endl;
    }
}
}