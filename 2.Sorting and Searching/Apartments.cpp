//Author: Nguyen Huu Loc
//Problem: https://cses.fi/problemset/task/1084/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> applicants(n), apartmentSize(m);
    for (int i = 0; i < n; i++) {
        cin >> applicants[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> apartmentSize[i];
    }

    sort(applicants.begin(), applicants.end());
    sort(apartmentSize.begin(), apartmentSize.end());

    int count = 0;
    for (int i = 0, j = 0; i < n && j < m;) {
        int d = abs(applicants[i] - apartmentSize[j]);
        if (d <= k) {
            count++;
            i++;
            j++;
        } else if (applicants[i] < apartmentSize[j]) {
            i++;
        } else {
            j++;
        }
    }

    cout << count;
    return 0;
}
