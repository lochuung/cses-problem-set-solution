//Author: Nguyen Huu Loc
//Problem: https://cses.fi/problemset/task/1623
#include "bits/stdc++.h"

using namespace std;

int main() {
    int n;
    cin >> n;
    long long p[n];
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    long long distance = 1e9;
    for (int i = 0; i < (1 << n); i++) {
        long long sum1 = 0, sum2 = 0;
        for (int j = n - 1; j >= 0; --j) {
            if (((1 << j) & i) > 0) {
                sum1 += p[j];
            } else sum2 += p[j];
        }
        distance = min(distance, abs(sum1 - sum2));
    }

    cout << distance;

    return 0;
}
