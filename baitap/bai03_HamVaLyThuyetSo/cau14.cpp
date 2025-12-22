#include <bits/stdc++.h>
using namespace std;
#define ll long long



ll kq(ll n, ll p)
{
    ll ans = 0;
    for(ll i = p; i <= n; i *= p)
    {
        ans += n / i;

    }
    return ans;
}

int main()
{
    ll n, p; cin >> n >> p;
    cout << kq(n, p);
    return 0;
}


