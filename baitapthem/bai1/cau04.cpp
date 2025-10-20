#include <bits/stdc++.h>
using namespace std;
int main () {
	int a, b;
	cin >> a >> b;
	long long tong = 1ll * a + b;
	long long hieu = 1ll * a - b;
	long long tich = 1ll * a * b;
	double thuong = (double)a / b;
	if(b == 0) {
		cout << "khong the chia khi b = 0";
	}
	else { cout << tong << " " << hieu << " " << tich << " " << fixed <<  setprecision(2) << thuong; }
}
