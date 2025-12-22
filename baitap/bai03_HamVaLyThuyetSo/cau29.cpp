#include <bits/stdc++.h>
using namespace std;
#define ll long long

int sodep(int n) {
    int temp = n;
    int dao = 0;
    int sum = 0;
    int dem = 0;
    while(n) {
        sum += n%10;
        if(n % 10 == 6) dem++;
        dao =  dao*10 + n%10;
        n /= 10;
    }
    if((dao == temp) && (sum%10 == 8) && (dem >= 1) ) return true;
    return false;
}



int main () {
    int a, b;
    cin >> a >> b;
	for(int i = a; i <= b; i++) {
        if(sodep(i)) cout << i << " ";
    }
}