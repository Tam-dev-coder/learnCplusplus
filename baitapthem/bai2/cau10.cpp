#include <bits/stdc++.h>
using namespace std;
int main () {
	int d1, d3, d2;
	cin >> d1 >> d3 >> d2;
	int kc1 = d1 + d3 + d2;
	int kc2 = 2 * (d1 + d3);
	int kc3 = 2 * (d2 + d3);
	int kc4 = 2 * (d1 + d2);
	int kc = min(min(kc1, kc2), min(kc3, kc4));
	cout << kc; 
}
