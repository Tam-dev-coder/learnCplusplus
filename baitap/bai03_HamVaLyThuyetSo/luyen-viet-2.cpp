#include <bits/stdc++.h>
using namespace std;
#define ll long long


bool ham1(ll n) {
    if( n == 0) return true;
    int dem = 0;
    while(n > 0) {
        if( ( n  % 2) == 0) dem++;
        n = n / 10;
    }
    if(dem % 2 == 1) return true;
    else return false;
}

bool ham2(ll n) {
    if( n == 0 ) return true;
    int chan = 0;
    int le = 0;
    while(n > 0) {
        if(n % 2 == 0) chan++;
        else le++;
        n /= 10;
    }
    if(chan > le ) return true;
    else return false;
}

bool ham3(ll n) {
    ll last = n % 10;
    while( n >= 10) {
        n /= 10;
    }
    if(last == n) return true;
    else return false;
}

bool ham4(ll n) {
    ll tong = 0;
    while( n > 0) {
        tong += n%10;
        n = n/10;
    }
    if(tong % 10 == 8) return true;
    else return false;
}

bool ngto(ll n) {
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) return false;
    }
    return n > 1;
}

bool ham5(ll n) {
    ll tong = 0;
    while( n > 0) {
        tong += n%10;
        n = n/10;
    }
    if(ngto(tong)) return true;
    else return false;

}

bool ham6(ll n) {
    while(n > 10) {
        if( abs(n % 10 - ((n / 10) % 10)) != 1) return false;
        n /= 10;
    }
    return true;
}

bool ham7(ll n) {
    int maxdigit = 0;
    while( n >= 10) {
        maxdigit = max(maxdigit, (int)(n % 10));
        // chú ý max bên trong là int dùng long long sẽ báo lỗi
        n /= 10;
    }
    if(n > maxdigit) return true;
    else return false;
}

bool fibo(ll n) {
    if( n == 0 || n == 1) return true;
    int f1 = 0, f2 =1, fn;
    for(int i = 2; i <= 92; i++) {
        fn = f1 + f2;
        if(fn == n) return true;
        f1 = f2; 
        f2 = fn;
    }
    return false;
}


bool ham8(ll n) {
    int tong = 0;
    while( n > 0) {
        tong += n % 10;
        n /= 10;
    }
    if(fibo(tong)) return true;
    else return false;

}
bool thuannghich(ll n) {
    int m = 0, temp = n;
    while( n > 0) {
        m = m * 10 + n % 10; // lấy số cuối nhân cho 10 sau đó cộng số liền trước
        n /= 10;
    }
    if( m == temp) return true;
    return false;

}

bool ham9(ll n) {
    int tong = 0;
    while( n > 0) {
        tong += n % 10;
        n /= 10;
    }
    if(thuannghich(tong)) return true;
    else return false;

}

bool ham10(ll n) {
    while( n > 0) {
        int r = n % 10;
        if( r != 0 && r != 6 && r != 8) return false;
        n /= 10;
    }
    return true;;
}





int main () {
    ll n; cin >> n;

    if(ham1(n)) cout << 1;
    else cout << 0;
    cout << endl;
     if(ham2(n)) cout << 1;
    else cout << 0;
    cout << endl;
     if(ham3(n)) cout << 1;
    else cout << 0;
    cout << endl;
     if(ham4(n)) cout << 1;
    else cout << 0;
    cout << endl;
     if(ham5(n)) cout << 1;
    else cout << 0;
    cout << endl;
     if(ham6(n)) cout << 1;
    else cout << 0;
    cout << endl;
     if(ham7(n)) cout << 1;
    else cout << 0;
    cout << endl;
     if(ham8(n)) cout << 1;
    else cout << 0;
    cout << endl;
     if(ham9(n)) cout << 1;
    else cout << 0;
    cout << endl;
     if(ham10(n)) cout << 1;
    else cout << 0;
    
	
}