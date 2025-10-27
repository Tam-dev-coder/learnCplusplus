#include <bits/stdc++.h>
using namespace std;
int main () {
	long long s;
    cin >> s;
    long long hour = s/3600;
    long long minute =(s%3600)/60;
    long long second = s - hour*3600 - minute*60;
    cout << hour << "h : " << minute << "m : " << second << "s";
}