#include <bits/stdc++.h>
using namespace std;
int main () {
	int n; cin >> n;
    long long s = 0;
    for(int i = 2; i <= 2*n; i+= 2) {
        s += i;
    }
    cout << s;
}