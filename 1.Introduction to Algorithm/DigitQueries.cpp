//Author: Nguyen Huu Loc
//Problem: https://cses.fi/problemset/task/2431/
#include <bits/stdc++.h>

using namespace std;

long long pow_bin(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if ((b & 1ll) > 0) {
            res = res * a;
        }
        a *= a;
        b = b >> 1ll;
    }
    return res;
}

void solve() {
    long long k;
    cin >> k;
    //k = 13 (ans = 1 in 11)
    int digits = 1;
    long long p = 9;

    while (k - p > 0) {
        k -= p;
        digits++;
        p = 8 * pow_bin(10, digits - 1) * digits;
    }
    // k = 4, digits = 2;
    k--;

    long long number = pow_bin(10ll, digits - 1) + k / digits;

    char answer = to_string(number)[k % digits];

    cout << answer << "\n";
}

int main() {
    int q;
    cin >> q;
    while (q--) {
        solve();
    }
    return 0;
}
