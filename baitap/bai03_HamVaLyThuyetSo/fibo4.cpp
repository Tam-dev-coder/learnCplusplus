#include <bits/stdc++.h>
using namespace std;
#define ll long long

int fibo[21];
int a[10001];
void sang() {
    for(int i = 1; i <= 10001; i++) {
        a[i] = 1;
    }
    a[1] = 0;
    for(int i = 2; i <= sqrt(10001); i++) {   
        if(a[i] == 1) {
            for(int j = i * i; j <= 10001; j += i) {
                    a[j] = 0;
            }
    }

    }
   
 }


int tongcs(int n) {
    int sum = 0;
    while(n) {
        sum += n % 10; 
        n /= 10;
    }
    return sum;
}

bool checkfibo(int n) {
    fibo[1] = 1;
    fibo[2] = 1;
    for(int i = 3; i <= 21; i++) {
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
    for(int i = 1; i <= 21; i++) {
        if(fibo[i] == tongcs(n)) return true;
    }
    return false;
}






int main () {
    int n; cin >> n;
	sang();
    for(int i = 1; i <= n; i++) {
        if(a[i] && checkfibo(i)) {
            cout << i << " ";
        }
    }
}