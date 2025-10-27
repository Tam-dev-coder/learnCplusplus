#include <bits/stdc++.h>
using namespace std;
int main () {
	int k2, k3, k5, k6;
    cin >> k2 >> k3 >> k5 >> k6;
    int so256 = min({k2, k5, k6});
    int so32 = min(k3, k2 - so256);
    cout << so256 * 256 + so32 * 32;
}