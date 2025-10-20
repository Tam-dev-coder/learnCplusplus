#include <bits/stdc++.h>
using namespace std;
int main () {
	long long  n;
	cin >> n;
	if(n % 2 == 0) {
	 	long long tong = n/2;
	 	cout << tong;
	}
	else if( n % 2 != 0) {
		long long tong = -(n+1)/2;
		cout << tong; 
	}
}
