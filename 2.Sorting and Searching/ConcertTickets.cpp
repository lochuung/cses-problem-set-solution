//Author: Nguyen Huu Loc
//Problem: https://cses.fi/problemset/task/1091
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    set<pair<int, int>> tickets;
    vector<int> customers(m);

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        tickets.insert({x, i});
    }
    for (int i = 0; i < m; i++) cin >> customers[i];

    for (int i = 0; i < m; i++) {
        auto it = tickets.lower_bound({customers[i] + 1, 0});

        if (it == tickets.begin()) {
            cout << -1 << "\n";
            continue;
        }
        
        it--;
        cout << (*it).first << "\n";
        tickets.erase(it);
    }
    return 0;
}
