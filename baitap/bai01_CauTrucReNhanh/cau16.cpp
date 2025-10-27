#include <bits/stdc++.h>
using namespace std;
int main () {
	char kt;
	cin >> kt;
	if( kt >= 'A' && kt <= 'Z')  {
		kt = kt + 32;
	}
	if( kt == 'z')  {
		cout << 'a'; 
	}
	else if (kt >= 'a' && kt <= 'z') {
		cout << (char)(kt + 1); 
	}
}