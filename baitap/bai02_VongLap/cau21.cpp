#include <bits/stdc++.h>
using namespace std;
int main () {
	int n; cin >> n;
    // hình 1
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    // hình 2

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(i == 1 || j == 1 || i == n || j == n) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
    cout << endl;

    //hình 3

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(i == 1 || j == 1 || i == n || j == n) cout << "*";
            else cout << "#";
        }
        cout << endl;
    }
    cout << endl;

    // hình 4

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(i == 1 || j == 1 || i == n || j == n) cout << i << " ";
            else cout << "  ";
        }
        cout << endl;
    }
    cout << endl;
}