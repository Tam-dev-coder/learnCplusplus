#include <bits/stdc++.h>
using namespace std;
int main () {
	int n; cin >> n;
    // hình 1
    for(int i = 1; i <=n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    // hình 2

    for(int i = 1; i <=n; i++) {
        for(int j = 1; j <= n-i+1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    // hình 3

    for(int i = 1; i <=n; i++) {
        for(int j = 1; j <= n; j++) {
            if(j <= n - i) cout << " ";
            else cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    // hình 4

    for(int i = 1; i <=n; i++) {
        for(int j = 1; j <= n; j++) {
            if(j >= i) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
    cout << endl;

    // hình 5

     for(int i = 1; i <=n; i++) {
        for(int j = 1; j <= i; j++) {
            if( j > 1 && j < i && i != n) cout << " ";
            else cout << "*";
        
        }
        cout << endl;
    }

    


}