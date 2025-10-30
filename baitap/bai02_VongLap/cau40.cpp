#include <bits/stdc++.h>
using namespace std;
int main () {
	int n; cin >> n;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= 10; j++) {
            cout << i << "x" << j << "=" << i * j;
            cout << endl;
        }
        cout << endl;
    }

    //     for(int i = 1; i <= 10; i++) {
    //         for(int j = 1; j <= n; j++) {
    //          cout << j << " " << "x" << " " << setw(2) << i 
    //          << " = " << setw(2) << i * j << "     ";
    //          // setw(x) tạo thêm khoảng trắng trước kí tự để kí tự chiếm x khoảng 
    //         }
    //         cout << endl;
    // }

}