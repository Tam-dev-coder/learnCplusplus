#include <bits/stdc++.h>
using namespace std;
int main () {
    int n; cin >> n;
	for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i % 2 == 0) cout << (char)('A' + j + i );
            else cout << (char)('a' + j + i);
        }
        cout << endl;
    }
}