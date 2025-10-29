#include <bits/stdc++.h>
using namespace std;
int main () {
	int n; cin >> n;

    // hình 1

    // for(int i = 0; i < n; i++) {
    //     for(int j = 0; j < n; j++) {
    //         if(i == 0) cout << j + 1 << " ";
    //         else cout << n + i + j << " ";
    //     }
    //     cout << endl;
    // }


    int dem = 1;
    for(int i =1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cout << dem << " "; ++dem;
        }
        cout << endl;
    }


    cout << endl;

    // hình 2

      for(int i = 0; i < n; i++) {
        for(int j = 1; j <= n; j++) {
           cout << i + j << " ";
        }
        cout << endl;
    }

    //  for(int i = 1; i <= n; i++) {
    //     int kt = i;
    //     for(int j = 1; j <= n; j++) {
    //        cout << kt << " "; kt++;
    //     }
    //     cout << endl;
    // }


    cout << endl;

    // hình 3

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(j <= n - i) cout << "~";
            else cout << i;
        }
        cout << endl;
    }
    cout << endl;

    //  hình 4


     for(int i = 1; i <= n; i++) {
        int kt = i;
        int dem = n -1;
        for(int j = 1; j <= i; j++) {
            cout << kt << " ";
            kt += dem;
            --dem;

        }
        cout << endl;
    }


}