#include <bits/stdc++.h>
using namespace std;
int main () {
    int n; cin >> n;
    // yeu cau 1
	for(int i = 0; i <= n; i += 3) {
        cout << i << " ";
    }
    cout << endl;
    // yeu cau 2
    for(int i = 0; i < n; i++) {
        if( i % 3 == 0 && i % 5 == 0) cout << i << " ";
    }
    cout << endl;
    // yeu cau 3
    for(int i = n; ; i++) {
        if( i % 7 == 0)  {
            cout << i;
            break;
        }
    }
    cout << endl;
    // yeu cau 4
    for(int i = n; i >= 0; i--) {
        if(i % 9 == 0) {
            cout << i;
            break;
        }
    }
    cout << endl;
    // yeu cau 5
    for(int i = 1; i <= n; i++) {
        cout << 2*i -1 << " ";
    }
}