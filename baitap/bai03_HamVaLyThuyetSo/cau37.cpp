#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007

ll pow2( ll a, ll b) {
ll res = 1;
while( b != 0) {
if(b % 2 == 0) {
res *= a;
res %= MOD;
}
// bit cuối cùng của b là 1
a = ((a%MOD)*(a%MOD))%MOD;
// a *= a;
// a %= c;
b /= 2;
// xóa bit cuối
}
return res;
}



int main () {
	ll a, b;
    cin >> a >> b;
    cout << pow2(a, b);
}