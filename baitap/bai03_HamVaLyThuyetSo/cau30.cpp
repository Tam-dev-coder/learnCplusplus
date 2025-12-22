#include <bits/stdc++.h>
using namespace std;
#define ll long long

int a[10000001]; 
void sang()
{
    for (int i = 1; i <= 1e7; i++)
    {
        a[i] = 1;
    }
    a[1] = a[0] = 0;

    for (int i = 2; i <= sqrt(1e7); i++)
    {
        if (a[i] == 1)
        {
            for (int j = i * i; j <= 1e7; j += i)
            {
                a[j] = 0;
            }
        }
    }
}

bool sccln(int n) {
    if(n % 10 == 9) return true;
    int scc = n % 10;
    while(n) {
        if(scc < n % 10) return false;
        n /= 10;
    }
    return true;
}



int main () {
    
    int n; cin >> n;
    sang();
    for(int i = 1; i <= n; i++)
    if(a[i] && sccln(i)) cout << i << " ";
	
}