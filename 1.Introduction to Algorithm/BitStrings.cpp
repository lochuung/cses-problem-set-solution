//Author: Nguyen Huu Loc
//Problem: https://cses.fi/problemset/task/1617/
#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
	int n; cin >> n;
	
	int res = 1;
	for (int i = 0; i < n; i++) {
		res = res << 1;
		res %= MOD;
	}
	
	cout << res;
	return 0;
}
