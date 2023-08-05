//Author: Nguyen Huu Loc
//Problem: https://cses.fi/problemset/task/1624/
#include "bits/stdc++.h"

using namespace std;

char ChessBoard[8][8];

bool leftDiagonal[15], rightDiagonal[15], placeColumns[8];
int ans = 0;

void solve(int i) {
    if (i == 8) {
        ++ans;
        return;
    }
    for (int j = 0; j < 8; j++) {
        if (ChessBoard[i][j] == '*' || leftDiagonal[i + j] || rightDiagonal[i - j + 7] || placeColumns[j])
            continue;

        leftDiagonal[i + j] = rightDiagonal[i - j + 7] = placeColumns[j] = true;
        solve(i + 1);
        leftDiagonal[i + j] = rightDiagonal[i - j + 7] = placeColumns[j] = false;
    }
}

int main() {
    for (auto &i: ChessBoard) {
        for (char &j: i)
            cin >> j;
    }

    solve(0);

    cout << ans;
    return 0;
}
