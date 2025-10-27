#include <bits/stdc++.h>
using namespace std;
int main () {
	int a, b, c;
    cin >> a >> b >> c;
    int nn = min({a, b, c});
    int mid = max(min(a, b), min(max(a,b), c));
    int ln = max({a, b, c});
    cout << nn << " " << mid << " "<< ln;

}