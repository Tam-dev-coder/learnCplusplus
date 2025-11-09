#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool ngto(int n)  {
   
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) return false;
    }
    return n > 1;
}

bool csnt(int n) {
    while(n > 0) {
        int d = n % 10;
        if( d != 2 && d != 3 && d != 5 && d != 7) return false;
        n /= 10;
    }
    return true;
}



int main () {
    int a, b;
    cin >> a >> b;
    int dem = 0;
    for(int i = a; i <= b; i++) {
        if( ngto(i) && csnt(i)) ++dem;
    }
    cout << dem;
	
}