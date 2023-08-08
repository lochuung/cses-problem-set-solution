//Author: Nguyen Huu Loc
//Problem: https://cses.fi/problemset/task/1090/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> weight(n);
    for (int i = 0; i < n; i++) cin >> weight[i];

    sort(weight.begin(), weight.end());

    int count = 0;
    int l = 0, r = n - 1;
    while (l <= r) {
        if (weight[l] + weight[r] <= x) {
            count++;
            l++;
            r--;
        } else {
            count++;
            r--;
        }
    }

    cout << count;
    return 0;
}
