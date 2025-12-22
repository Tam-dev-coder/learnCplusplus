#include <bits/stdc++.h>
using namespace std;
#define ll long long

int tong1(int n) {
    int sum = 0;
    while(n) {
        sum += n%10;
        n /= 10;
    }
    return sum;
} 



bool smith(int n) {
    int tmp = n;
    int tong = 0;
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) {
        while(n % i == 0) {
            n /= i;
            tong += tong1(i);
        }
    }
    
}
    if(tmp == n) return false; // n là số nguyên tố
    if(n > 1) tong += tong1(n); // thừa số nguyên tố lớn hơn căn n duy nhất có thể
    return tong == tong1(tmp);
}



int main () {
    int n; cin >> n;
	if(smith(n)) cout << "YES";
    else cout << "NO";
}