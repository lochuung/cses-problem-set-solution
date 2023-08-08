//Author: Nguyen Huu Loc
//Problem: https://cses.fi/problemset/task/1640
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int &i: a) cin >> i;

    map<int, int> map; //value -> index
    for (int i = 0; i < n; i++) {
        int complement = x - a[i];
        if (map.contains(complement)) {
            cout << map[complement] + 1 << " " << i + 1;
            return 0;
        }
        map[a[i]] = i;
    }

    cout << "IMPOSSIBLE";

    return 0;
}
