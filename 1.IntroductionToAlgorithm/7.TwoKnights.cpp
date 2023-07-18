#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	
	for (long long i = 1; i <= n; i++) {
		long long allCombination = i * i * (i * i - 1) / 2;
		long long attackingKnights = 4 * (i - 1) * (i - 2);
		cout << allCombination - attackingKnights << "\n";
	}
	return 0;
}
