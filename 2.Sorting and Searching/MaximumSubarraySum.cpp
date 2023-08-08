//Author: Nguyen Huu Loc
//Problem: https://cses.fi/problemset/task/1643
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i: v) cin >> i;

    long long ans = INT_MIN, sum = 0;
    for (int i = 0; i < n; i++) {
        sum += v[i];
        if (sum > ans) ans = sum;
        if (sum < 0) sum = 0;
    }
    cout << ans;
    return 0;
}
