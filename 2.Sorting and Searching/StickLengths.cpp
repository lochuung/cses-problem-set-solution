//Author: Nguyen Huu Loc
//Problem: https://cses.fi/problemset/task/1074
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for (auto &it: a) cin >> it;

    sort(a.begin(), a.end());

    int median = a[n / 2];
    long long ans = 0;
    for (int i = 0; i < n; i++) {
        ans += abs(a[i] - median);
    }

    cout << ans;
    return 0;
}
