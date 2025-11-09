#include <bits/stdc++.h>
using namespace std;

int ham1(int n) {
    if( n < 2) return 0;
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) return 0;
    }
    return 1;
}

int ham2(int n) {
    int tong = 0;
    while( n > 0) {
        tong += n % 10;
        n /= 10;
    }
    return tong;
}

int ham3(int n) {
    int tong = 0;
    while(n > 0) {
        if( n % 2 == 0) tong += n % 10;
        n /= 10;
    }
    return tong;
}


int ham4(int n) {
    int tong = 0;
    while( n > 0) {
        int r = n%10;
        if( r == 2 || r == 3 || r == 5 || r == 7) tong += n % 10;
        n /= 10;
    }
    return tong;

}

int ham5(int n) {
    int t = 0;
    while(n > 0) {
        t = t * 10 + n % 10;
        n /= 10;
    }
    return t;
}

int ham6(int n) {
    int cnt = 0;
    for(int  i = 2; i <= sqrt(n); i++) {
        if( n % i == 0) {
           cnt++;
            while(n % i == 0) {
                n /= i; 
            }
        }
    }
    if(n > 1) cnt++;
    return cnt;
}


int ham7(int n) {
    int res;
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) {
            res = i;
            while(n % i == 0) {
                n /= i;
            }
        }
    }
    if(n > 1) return n;
    return res;
}


// hàm 8

int ham8(int n) {
    while(n) {
        if(n % 10 == 6) return 1;
        n /= 10;
    }
    return 0;

}

// hàm 9
int ham9(int n) {
    if(ham2(n) % 8 == 0) return true;
    return false;
}

// hàm 10

int giaithua(int n) {
    int res = 1;
    for(int  i = 2; i <= n; i++) {
        res *= i;
    }
    return res;
}

int ham10(int n) {
    int res = 0;
    while(n) {
        res += giaithua(n % 10);
        n /= 10;
    }
    return res;
}

int ham11(int n) {
    int r = n % 10;
    while(n) {
        if( n % 10 != r) return false;
        n /= 10;
    }
    return true;
}

int ham12(int n) {
    int r = n % 10;
    while(n) {
        if( n % 10 > r) return false;
        n /= 10;
    }
    return true;
}

int count(int n) {
    int dem = 0;
    while(n) {
        dem++;
        n /= 10;
    }
    return dem;
}



int ham13(int n) {
    int luythua = 0;
    int mu = count(n);
    while(n) {
        luythua += pow(n%10,mu);
        n /= 10;
    }
    return luythua;
}



int main () {
    int n; cin >> n;
    cout << ham1(n) << endl;
    cout << ham2(n) << endl;
    cout << ham3(n) << endl;
    cout << ham4(n) << endl;
    cout << ham5(n) << endl;
    cout << ham6(n) << endl;
    cout << ham7(n) << endl;
    cout << ham8(n) << endl;
    cout << ham9(n) << endl;
    cout << ham10(n) << endl;
    cout << ham11(n) << endl;
    cout << ham12(n) << endl;
    cout << ham13(n) << endl;
	
}