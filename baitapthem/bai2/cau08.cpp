#include <bits/stdc++.h>
using namespace std;
int main () {
	int n;
	cin >> n;
	int a = n/100;
	int b = n%100/20;
	int c = (n - a*100 - b*20)/10;
	int d = (n - a*100 - b*20 - c*10)/5;
	int e = (n - a*100 - b*20 - c*10 - d*5);
	cout << a + b + c + d + e; 

}
