#include <bits/stdc++.h>
using namespace std;
int main () {
	int n; cin >> n;
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        int temp; cin >> temp;
        if(temp % 2 == 0) sum += temp;
    }
    cout << sum;
}