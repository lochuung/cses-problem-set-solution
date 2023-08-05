//Author: Nguyen Huu Loc
//Problem: https://cses.fi/problemset/task/1094/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	
	long long res = 0;
	int prev = -1e9;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		
		if (prev > x) {
			res += prev - x;
			x = prev;
		}
		prev = x;
	}
	
	cout << res;
	return 0;
}
