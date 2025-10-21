#include <bits/stdc++.h>
using namespace std;
int main () {
	int N; cin >> N;
	//1
	if(N % 2 == 0) {
	cout << "YES\n";
	}
	else {cout << "NO\n";}
	//2
	if(N % 3 == 0 && N % 5 == 0) {
	cout << "YES\n";
	}
	else {cout << "NO\n";}
	//3
	if(N % 3 == 0 && N % 7 != 0) {
	cout << "YES\n";
	}
	else {cout << "NO\n";}
	//4
	if(N % 3 == 0 || N % 7 == 0) {
	cout << "YES\n";
	}
	else {cout << "NO\n";}
	//5
	if(N > 30 && N < 50 ) {
	cout << "YES\n";
	}
	else {cout << "NO\n";}
	//6
	if(N >= 30 && (N % 2 == 0 || N % 3 == 0 || N % 5 == 0)) {
	cout << "YES\n";
	}
	else {cout << "NO\n";}
	//7
	if(N >= 10 && N <= 99 && ( N % 10 == 2 || N % 10 == 3 || N % 10 == 5 || N % 10 == 7)) {
	cout << "YES\n";
	}
	else {cout << "NO\n";}
	//8
	if(N <= 100 && N % 23 == 0) {
	cout << "YES\n";
	}
	else {cout << "NO\n";}
	//9
	if(N < 10 || N > 20) {
	cout << "YES\n";
	}
	else {cout << "NO\n";}
	//10
	if(N % 10 == 3 || N % 10 == 6 || N % 10 == 9) {
	cout << "YES\n";
	}
	else {cout << "NO\n";}
}
