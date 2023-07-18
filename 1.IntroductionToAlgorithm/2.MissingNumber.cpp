#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	
	long long sumOfSequence = (long long) n * (n + 1) / 2;
	long long result = sumOfSequence;
	for (int i = 0; i < n - 1; i++) {
		int input; cin >> input;
		result -= input;
	}
	cout << result;
	
	return 0;
}
