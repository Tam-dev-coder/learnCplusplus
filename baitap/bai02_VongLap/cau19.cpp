#include <bits/stdc++.h>
using namespace std;
int main () {
	int n; cin >> n;
    int dem = n/28;
    int vochai = n/28;
    while(vochai >= 3) {
        int doi = vochai/3;
        dem += doi;
        vochai = doi + vochai%3;
    }
    cout << dem;

}