#include <bits/stdc++.h>
using namespace std;
int main () {
	double  a1, b1, c2, d3;
	cin >> a1 >> b1 >> c2 >> d3;
	double di = (a1 + b1 + c2 * 2 + d3 * 3)/7;
	if(di >= 8) {
		cout << "GIOI"; 
	} 
	else if(di >= 6.5) {
		cout << "KHA"; 
	} 
	else if(di >= 5) {
		cout << "TRUNG BINH"; 
	}
	else {
		cout << "YEU"; 
	} 
}
