#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool thuannghich(int n) {
    int temp = n;
    int nguoc =  0;
    while(n) {
        nguoc = nguoc*10 + n%10;
        n /= 10;
    }
    if(nguoc == temp) return true;
    else return false;
}

bool BaNgto(int n) {
    int cnt = 0;
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) {
            cnt++;
            while(n % i == 0) {
                n /= i;
            }
        }
    }
    if(n > 1) cnt++;
    if(cnt > 2) return true;
    else return false;
}



int main () {
int a, b; 
cin >> a >> b;
int cnt = 0;
for(int i = a; i <= b; i++) {
    if(thuannghich(i) && BaNgto(i)) {
        cnt++;
        cout << i << " ";
    }
}
if(cnt == 0) cout << -1;
	
}