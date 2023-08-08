//Author: Nguyen Huu Loc
//Problem: https://cses.fi/problemset/task/1074
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a, a + n);

	long long ans = 1;
    for (int i = 0; i < n; i++) {
        if (ans < a[i]) {
            cout << ans;
            return 0;
        }
        ans = ans + a[i];
    }
    cout << ans;
    return 0;
}
