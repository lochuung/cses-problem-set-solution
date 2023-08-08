//Author: Nguyen Huu Loc
//Problem: https://cses.fi/problemset/task/1619
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> v;

    for (int i = 0; i < n; i++) {
        int start, end;
        cin >> start >> end;

        v.emplace_back(start, 1);
        v.emplace_back(end, -1);
    }
    sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b) {
        return a.first < b.first || (a.first == b.first && a.second > b.second);
    });
    
    int ans = 0, curr = 0;
    for (auto it : v) {
        curr += it.second;
        ans = max(ans, curr);
    }
    
    cout << ans;
    return 0;
}
