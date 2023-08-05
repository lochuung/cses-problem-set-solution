//Author: Nguyen Huu Loc
//Problem: https://cses.fi/problemset/task/1618/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	
	int ans = 0;
	for (int i = 5; n / i > 0; i *= 5) {
		ans += n / i;
	}
	cout << ans;
	return 0;
}
