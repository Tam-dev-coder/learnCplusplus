#include <bits/stdc++.h>
using namespace std;
int main () {
	// note: handle the case when a = 0
	int a, b, c;
	cin >> a >> b >> c;
    if( a == 0) {
        if(b == 0 && c == 0) cout << "VO SO NGHIEM";
        else if(b == 0) cout << "VO NGHIEM";
        else {
            double x = -1.0*c/b;
            cout << fixed << setprecision(2) << x;
        }
    }
    else {
	    int delta = b*b - (4 * a * c);
	    if(delta > 0) {
		    double x1 = (-b + sqrt(delta))/ (2*a);
		    double x2 = (-b - sqrt(delta)) / (2*a);
		    cout <<  fixed << setprecision(2) << min(x1, x2);
            cout << " " << fixed << setprecision(2) << max(x1, x2); 
	    }
	    else if(delta == 0) { 
		    double x = -b/(2.0*a);
		    cout << fixed << setprecision(2) << x; 
		
	    }
	    else {
		    cout  << "VO NGHIEM"; 
	    } 
    }
} 
