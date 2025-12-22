#include <bits/stdc++.h>
using namespace std;
#define ll long long





int main () {
int n; cin >> n;
int dem = 0;
for(int i = 1; i <= sqrt(n); i++)
	if(n % i == 0) {
        dem++;
        if(i != n/i) dem++;
    }
cout << dem;

}
