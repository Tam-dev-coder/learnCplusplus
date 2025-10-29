#include <bits/stdc++.h>
using namespace std;
int main () {
	long long n; cin >> n;
    long long sum = 0;
    for(int i = 1; i <= sqrt(n); i++) {
        if(n % i == 0) {
            sum += i;
            if( i * i != n) sum += n/i;
        } 
    }
    cout << sum;
}