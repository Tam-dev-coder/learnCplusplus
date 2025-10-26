#include <bits/stdc++.h>
using namespace std;
int main () {
	char kt;
	cin >> kt;
	if( kt >= 65 && kt <= 90) {
		char a = kt + 32;
		cout << a;
	}
 	else if( kt >= 97 && kt <= 122) {
		char a = kt - 32;
		cout << a;
	}
    else cout << kt;

}
