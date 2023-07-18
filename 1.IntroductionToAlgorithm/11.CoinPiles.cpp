#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		long long a,b; cin >> a >> b;
		string result = ((a + b) % 3 == 0 && min(a, b) * 2 >= max(a, b)) ? "YES" : "NO";
		cout << result << "\n";
	}
	return 0;
}
