#include <bits/stdc++.h>
using namespace std;
int main () {
	int n; cin >> n;
    // for(int i  = 1; i <= n; i++) {
    //     for(int j = 1; j <= n - i ; j++) {
    //         cout << "  ";
    //     }
    //     for(int j = 1; j <= 2 * i - 1; j++) {
    //         cout << "* ";
    //     }
    //     cout << endl;

    // }
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= 2 * n- 1; j++) {
            if(abs(n-j) <= (i - 1)) cout << " * ";
            else cout << "   ";
            // trên hàng thứ i in ra số lượng dấu sao là 2 * n - 1;
            // ở hàng thứ i in ra dấu sao ở abs của n - j nhỏ hơn hoặc bằng i - 1;
        }
        cout << endl;
}
}