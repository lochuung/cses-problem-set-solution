#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int x[n];
	for (int i = 0; i < n; i++) cin >> x[i];
	
	long long res = 0;
	for (int i = 0; i < n - 1; i++) {
		if (x[i] > x[i + 1])
		{
			res += x[i] - x[i + 1];
			x[i + 1] = x[i];
		}
	}
	
	cout << res;
	return 0;
}
