#include "bits/stdc++.h"

using namespace std;

void towerOfHanoi(int n, int source, int auxiliary, int destination) {
    if (n == 0) {
        return;
    }
    towerOfHanoi(n - 1, source, destination, auxiliary);
    cout << source << " "
         << destination << "\n";
    towerOfHanoi(n - 1, auxiliary, source, destination);
}

int main() {
    int n;
    cin >> n;
	
	cout << (1 << n) - 1 << "\n";
    towerOfHanoi(n, 1, 2, 3);
    return 0;
}
