#include <bits/stdc++.h>
using namespace std;
#define ll long long

int rev(ll n) {
    ll r = 0;
    while(n) {
        r = r*10 + n%10;
        n/=10;
    }
    return r;
}

void ts(ll n) {
    int c2=0, c3=0, c5=0, c7=0;
    ll m = rev(n);
    ll a = n;
    

    while(n) {
        if(n % 10 == 2) c2++;
        else if(n % 10 == 3) c3++;
        else if(n % 10 ==5) c5++;
        else if(n % 10 == 7) c7++;
        n/=10;
    }

        if(c2) {cout << 2  << " " << c2 << endl; }
        if(c3) {cout << 3 << " " << c3 << endl; }
        if(c5) {cout << 5 << " " << c5 << endl;}
        if(c7) {cout << 7 << " " << c7 << endl; }

     cout << endl;

   
    while(m) {
        int r = m%10;
        if(r == 2 && c2 != 0) {cout << 2  << " " << c2 << endl; c2 = 0;}
        else if(r == 3 && c3 != 0) {cout << 3 << " " << c3 << endl; c3 = 0;}
        else if(r == 5 && c5 != 0) {cout << 5 << " " << c5 << endl; c5 = 0;}
        else if(r == 7 && c7 != 0) {cout << 7 << " " << c7 << endl; c7 = 0;}
        m/=10;
    }

}


int main () {
    ll n; cin >> n;
    ts(n);
}