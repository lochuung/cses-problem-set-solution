#include <bits/stdc++.h>
using namespace std;

int main() {
	string s; cin >> s;

	s.append("@");
	int res = 0, count = 1, c = '@';
	const int n = s.length();
	for (int i = 0; i < n; i++) {
		if (s[i] == c) {
			count++;
		} else {
			res = max(res, count);
			count = 1;
			c = s[i];
		}
	}
	
	cout << res;
	return 0;
}
