#include <bits/stdc++.h>
using namespace std;
int main () {
	int n; cin >> n;
    for(int i = 1; i <= 2 * n; i++) {
        for(int j = 1; j <= 2 * n - 1; j++) {
            if(i <= n) {
                if(j <= n - i) cout << "  ";
                else if(j < n + i) cout << "* ";
            }
            else if( i > n) {
                if(j <= i - n) cout << "  ";
                else if(j < 3 * n - i  ) cout << "* ";
            }
        }
        cout << endl;
    }
}