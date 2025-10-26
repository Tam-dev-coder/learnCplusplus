#include <bits/stdc++.h>
using namespace std;
int main () {
	char kt;
    cin >> kt;
    if( kt >= 65 && kt <= 90) cout << "UPPER";
    else if(kt >= 97 && kt <= 122) cout << "LOWER";
    else if(kt >= 48 && kt <= 57) cout << "DIGIT";
    else cout << "SPECIAL";

}