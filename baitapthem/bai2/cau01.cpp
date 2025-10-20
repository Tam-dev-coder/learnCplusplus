#include <bits/stdc++.h>
using namespace std;
int main () {
	int Sab, Sbc, Sca;
	cin >> Sab >> Sbc >> Sca;
	int V = sqrt(Sab * Sbc * Sca); // tuong duong sqrt (a*b * b*c * c*a) = sqrt (a^2 * b*2 * c^2) = a*b*c   
	int a = V/Sbc;
	int b = V/Sca;
	int c = V/Sab;
	cout << 4*(a + b + c);
}
