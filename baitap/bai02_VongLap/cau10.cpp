#include <bits/stdc++.h>
using namespace std;
int main () {
	int n; cin >> n;
    bool check = false;
    for( int i = 1; i <= n; i++) {
        int temp; cin >> temp;
        if(temp == 2022) check = true;
    }
    if(check) cout << "YES";
    else cout << "NO";
}