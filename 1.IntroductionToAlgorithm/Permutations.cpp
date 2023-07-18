#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	
	if (n == 1) {
		cout << 1;
		return 0;
	}
	
	if (n < 4) {
		cout << "NO SOLUTION";
		return 0;
	}
	
	int even = 2;
	while (even <= n) {
		cout << even << " ";
		even += 2;
	}
	
	int odd = 1;
	while (odd <= n) {
		cout << odd << " ";
		odd += 2;
	}
	return 0;
}
