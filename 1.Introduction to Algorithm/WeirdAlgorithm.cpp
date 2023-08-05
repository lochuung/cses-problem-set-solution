//Author: Nguyen Huu Loc
//Problem: https://cses.fi/problemset/task/1068
#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n; cin >> n;
	
	while (n != 1) {	
		cout << n << " ";
		n = (n % 2 == 0) ? n / 2 : n * 3 + 1;
	}
	if (n == 1) cout << 1;
	
	return 0;
}
