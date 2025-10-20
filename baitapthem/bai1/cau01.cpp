#include <iostream>
using namespace std;
int main () {
	long long a, b;
	cin >> a >> b;
	long long chianguyen = a / b;
	long long chiadu = a % b; 
	cout << chianguyen << " " << chiadu; 
	return 0; 
} 
