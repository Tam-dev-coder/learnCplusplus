#include <bits/stdc++.h>
using namespace std;
int main () {
	int w, h;
    cin >> w >> h;
    double bmi = (1.0 * w)/(1.0 * h/100*h/100);
    if(bmi < 18.5) cout << "Under weight";
    else if(bmi < 25) cout << "Normal";
    else if(bmi < 30) cout << "Over weight";
    else if(bmi < 35) cout << "Obesity 1";
    else if(bmi < 40) cout << "Obesity 2";
    else cout << "Extreme obesity";
}