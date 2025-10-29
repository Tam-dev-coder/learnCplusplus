#include <bits/stdc++.h>
using namespace std;
int main () {
	int n; cin >> n;
    int t = 0;
    // for(int i = 1; i <= n; i++) {
    //     t += (int)pow(-1, i) * i;
    //     // ép kiểu pow để ra số nguyên vì để pow sẽ sinh ra số double mà nếu i quá lớn sẽ bị tràn
    // }

    for( int i = 1; i <= n; i++) {
        if(i % 2 == 0) t += i;
        else t -= i;
    }
    cout << t;
}