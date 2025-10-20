#include <bits/stdc++.h>
using namespace std;
int main () {
	int a, b, z;
	cin >> a >> b >> z;
	int buoc = abs(a) + abs(b);
	if( buoc <= z && (buoc % 2 == z % 2)) {
		cout << "YES"; 
	}
	else cout << "NO"; 
}
