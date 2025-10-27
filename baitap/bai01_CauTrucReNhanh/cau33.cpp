#include <bits/stdc++.h>
using namespace std;
int main () {
	int a, b, c, n;
    cin >> a >> b >> c >> n;
    int tongtien = a + b + c + n;
    if( (tongtien % 3 == 0) && tongtien/3 >= a && tongtien/3 >= b && tongtien/3 >=c) {
        cout << "YES";
    }
    else cout << "NO";
}