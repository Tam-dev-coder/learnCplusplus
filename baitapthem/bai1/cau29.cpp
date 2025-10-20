#include <bits/stdc++.h>
using namespace std;
int main () {
	double a, b;
	cin >> a >> b;
	int k; 
	if((a >= 0 && b >= 0 && a != (int)a ) || (a <= 0 && b <= 0 && b != (int)b )) {
		k = (int)b - (int)a ; 
	}
	else k = (int)b - (int)a + 1; 
	cout << k; 
}
