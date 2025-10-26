#include <bits/stdc++.h>
using namespace std;
int main () {
	double a, b;
	long long n; 
	cin >> n >> a >> b;
	if(b < 2 * a) {
		if(n % 2 == 0) {
			cout << (b/2) * n; 
		}
		else cout << (b/2) * (n-1) + a; 
	}
	else cout << a * n; 
}
