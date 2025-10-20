#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

   	long long min1 = min(a, min(b, min(c, min(d, e))));
    long long min2 = max(a, max(b, max(c, max(d, e))));

    if (a > min1 && a < min2) min2 = a;
    if (b > min1 && b < min2) min2 = b;
    if (c > min1 && c < min2) min2 = c;
    if (d > min1 && d < min2) min2 = d;
    if (e > min1 && e < min2) min2 = e;

    if (min2 == LLONG_MAX)
        cout << "Khong co so nho thu hai";
    else
        cout << min2;
}

