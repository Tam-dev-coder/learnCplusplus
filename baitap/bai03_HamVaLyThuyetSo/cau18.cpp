#include <bits/stdc++.h>
using namespace std;
#define ll long long


int sodep(int n) {
    for(int i = 2; i <= sqrt(n); i++ ) {
        int cnt = 0;
        while(n % i == 0) {
            n /= i;
            ++cnt;
        }
        if(cnt >= 2) return 1;
    }
    return 0;
}


int main () {
    int a, b; cin >> a >> b;
    for(int i = a; i <= b; i++) {
        if(sodep(i)) cout << i << " ";
    }
	
}