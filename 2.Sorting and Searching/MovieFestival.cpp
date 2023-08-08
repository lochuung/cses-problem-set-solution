//Author: Nguyen Huu Loc
//Problem: https://cses.fi/problemset/task/1629
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (auto &i: v) {
        cin >> i.first >> i.second;
    }

    sort(v.begin(), v.end(), [](auto const &a, auto const &b) {
        return a.second < b.second;
    });
    int count = 0, last = 0;
    for (auto it: v) {
        if (it.first < last) continue;

        last = it.second;
        ++count;
    }

    cout << count;
    return 0;
}
