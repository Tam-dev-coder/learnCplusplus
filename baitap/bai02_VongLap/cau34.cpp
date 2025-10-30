#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int num = i;
        for (int j = 1; j <= 2 * n - 1; j++) {
            if (j <= n - i ) cout << "  ";        // bên trái: in khoảng trắng
            else if (j < n + i) {              // vùng giữa: in số
                cout << num << " ";
                if (j < n) num++;                   // nửa đầu tăng
                else num--;                         // nửa sau giảm
            }
        }
        cout << endl;
    }
}
