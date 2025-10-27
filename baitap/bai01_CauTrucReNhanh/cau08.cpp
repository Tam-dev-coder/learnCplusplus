#include <bits/stdc++.h>
using namespace std;
int main () {
	int a, b; 
    cin >> a >> b;
    int tong = a + b;
    int hieu = a - b;
    long long tich = (long long)a * b;
    double thuong = 1.0 * a / b;
    cout << tong << endl;
    cout << hieu << endl;
    cout << tich << endl;
    if( b == 0) cout << "INVALID";
    else cout << fixed << setprecision(4) << thuong;
}