#include <bits/stdc++.h>
using namespace std;
int main () {
	int a, b, n;
    cin >> a >> b >> n;
    // do a,b,n mà cần tìm x,y dương nên ax <= n nên x <= n/a
    // n - a - x là b*y nên khi chia dư cho b thì sẽ ra 0 và bằng y
    bool kt = false;
    for(int x = 0; x <= n/a; x++) {
        int r = n - a * x;
        if(r % b == 0) { 
            kt = true;
            break;
        }
    }
    if(kt) cout << "YES";
    else cout << "NO";
}