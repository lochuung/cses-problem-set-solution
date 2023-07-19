#include <bits/stdc++.h>
using namespace std;

void solve() {
	long long i, j;
	cin >> i >> j;
	
	
	long long result;
	if (j <= i) {
		if (i % 2 == 0) result = i * i - (j - 1); 
		else result = (i - 1) * (i - 1) + j;
	} else {
		if (j % 2 == 0) result = j * (j - 1) - (j - 1 - i);
		else result = j * j - (i - 1);
	}
	cout << result << "\n";
}

int main() {
	int t; cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
