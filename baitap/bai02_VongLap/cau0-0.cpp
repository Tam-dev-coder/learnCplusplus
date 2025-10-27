#include <bits/stdc++.h>
using namespace std;
int main () {
    int n; cin >> n;
    /*
    // dòng 1
	for(int i = 1; i <= n; i++) {
        cout << i << " ";
    }
    cout << endl;
    // dòng 2
    for(int i = 0; i <= n; i++) {
        cout << n - i << " ";
    }
    cout << endl;
    // dòng 3
    for(int i = 0; i <= n; i += 2) {
        cout << i << " ";
    }
    cout << endl;
    // dòng 4
    for(int i = 1; i <= n; i += 2) {
        cout << i << " ";
    }
    cout << endl;
    // dòng 5
       for(int i = 0; i < n; i += 4) {
        cout << i << " ";
    }
    cout << endl;
    // dòng 6
       for(int i = 0; i < n; i++) {
        cout << char('a'+i) << " ";
    }
    cout << endl;
    // dòng 7
       for(int i = n-1; i >= 0; i--) {
        cout << char('z' - i) << " ";
    }
    */
    // dòng 1
    int i = 0;
	while(i < n) {
        cout << i + 1 << " ";
        i++;
    }
    cout << endl;
    // dòng 2
   i = 0;
    while(i <= n) {
        cout << n - i << " ";
        i++;
    }
    cout << endl;
    // dòng 3
    i = 0;
    while( i <= n) {
        cout << i << " ";
        i += 2;
    }
    cout << endl;
    // dòng 4
    i = 0;
    while( i < n) {
        cout << i + 1 << " ";
        i += 2;

    }
    cout << endl;
    // dòng 5
    i = 0;
       while(i < n) {
        cout << i << " ";
        i += 4;
    }
    cout << endl;
    // dòng 6
    i = 0;
       while(i < n) {
        cout << char('a'+i) << " ";
        i++;
    }
    cout << endl;
    // dòng 7
    i = n - 1;
       while( i >= 0) {
        cout << char('z' - i) << " ";
        i--;
    }


}
