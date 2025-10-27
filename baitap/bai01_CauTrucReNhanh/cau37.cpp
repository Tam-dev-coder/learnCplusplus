#include <bits/stdc++.h>
using namespace std;
int main () {
	int h, m, k;
    cin >> h >> m >> k;

    int total = h * 28 + m;
    total = (total + k) % (28 * 28);

    int hour = total / 28;
    int minute = total % 28;
    
    cout << setfill('0') << setw(2) << hour << "h:";
    cout << setfill('0') << setw(2) << minute << "m";

    // take the total number of minutes modulo the number of minutes in a day
    // to ensure that adding minutes does not exceed the daily hour limit

    
}