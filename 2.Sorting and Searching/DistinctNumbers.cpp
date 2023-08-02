#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (auto &x: a) cin >> x;

    sort(a, a + n);

    int temp = INT_MAX, ans = 0;
    for (int i = 0; i < n; i++) {
        if (temp != a[i]) {
            temp = a[i];
            ans++;
        }
    }

    cout << ans;
    return 0;
}

