#include <bits/stdc++.h>
using namespace std;
int main () {
	int n, a1, a2, a3, b1, b2, b3;
    cin >> a1 >> a2 >> a3;
    cin >> b1 >> b2 >> b3;
    cin >> n;
    int kecup = (a1 + a2 + a3)/5;
    int kehc = (b1 + b2 + b3)/10;
    if(kecup > (int)kecup) kecup +=1;
    if(kehc > (int)kehc) kehc += 1;
    if( kecup + kehc <= n) cout << "YES";
    else cout << "NO";
}