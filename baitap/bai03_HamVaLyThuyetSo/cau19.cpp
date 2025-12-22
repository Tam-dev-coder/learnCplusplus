#include <bits/stdc++.h>
using namespace std;
#define ll long long


int sodep(int n) {
    if(n == 1) return 0;
    for(int i = 2; i <= sqrt(n); i++ ) {
        int cnt = 0;
        while(n % i == 0) {
            n /= i;
            ++cnt;
        }
        if(cnt == 1) return 0;
    }
    if(n != 1) return 0;
    return 1;
}


int main () {
    int a, b; cin >> a >> b;
    for(int i = a; i <= b; i++) {
        if(sodep(i)) cout << i << " ";
    }
	
}