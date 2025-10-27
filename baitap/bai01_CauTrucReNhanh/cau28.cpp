#include <bits/stdc++.h>
using namespace std;
int main () {
	int n, u1, d;
    cin >> n >> u1 >> d;
    long long sum = (n * (u1 + u1 + (n-1) * d))/2;
    cout << sum;
}