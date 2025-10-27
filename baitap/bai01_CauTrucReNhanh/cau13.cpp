#include <bits/stdc++.h>
using namespace std;
int main () {
	int day;
	cin >> day;
	int nam = day/365;
	int  tuan = day % 365 / 7;
	int ngay = day - nam * 365 - tuan * 7;
	cout << nam <<" " << tuan << " " << ngay; 
}
