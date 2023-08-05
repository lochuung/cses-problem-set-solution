//Author: Nguyen Huu Loc
//Problem: https://cses.fi/problemset/task/1092
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;

    long long sumOfSequence = (long long) n * (n + 1) / 2;

    if ((sumOfSequence & 1ll) > 0) {
        cout << "NO";
        return 0;
    }
    cout << "YES\n";

    unordered_set<int> s1;
    unordered_set<int> s2;

    int l = 1, r = (n % 2 == 0) ? n : n - 1;
    while (l < r) {
        if (l % 2 != 0) {
            s1.insert(l); s1.insert(r);
        } else {
            s2.insert(l); s2.insert(r);
        }
        l++; r--;
    }

    if ((n & 1) > 0) s2.insert(n);
	cout << s1.size() << "\n";
    for (auto x: s1) cout << x << " ";
    cout << "\n" << s2.size() << "\n";
    for (auto x: s2) cout << x << " ";
    return 0;
}
