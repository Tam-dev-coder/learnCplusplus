#include <bits/stdc++.h>
using namespace std;
int main () {
	int n, k, w;
	cin >> k >> n >> w;
	int tienmua  = k * (w *(2 + (w - 1)) / 2);
	if(tienmua > n) {
		cout << tienmua - n; 
	}
	else cout << "0";
}
