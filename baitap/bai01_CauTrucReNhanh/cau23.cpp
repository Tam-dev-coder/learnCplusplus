#include <bits/stdc++.h>
using namespace std;
int main () {
	int n, m, min;
	cin >> n >> m;
	if(n % 2 == 0) min = n/2;
	else  min = n/2 + 1; 
	int buoc = ((min + m - 1)/ m) * m;
	if ( buoc <= n ) {
		cout << buoc;
	}
	else cout  << "-1";
}
