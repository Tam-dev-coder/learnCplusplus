#include <bits/stdc++.h>
using namespace std;
int main () {
	int t; cin >> t;
    for(int i = 1; i <= t; i++) {
        int temp; cin >> temp;
        if(temp % 2 == 0) cout << "even";
        else cout << "odd";
    }
}