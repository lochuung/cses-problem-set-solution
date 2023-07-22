#include "bits/stdc++.h"

using namespace std;

char ChessBoard[8][8];

bool leftDiagonal[15], rightDiagonal[15], placeColumns[8];
int ans = 0;

void solved(int i) {
    if (i == 8) {
        ++ans;
        return;
    }
    for (int j = 0; j < 8; j++) {
        if (ChessBoard[i][j] == '.' && !leftDiagonal[j - i + 7] && !rightDiagonal[i + j] && !placeColumns[j]) {
            leftDiagonal[j - i + 7] = true;
            rightDiagonal[i + j] = true;
            placeColumns[j] = true;
            solved(i + 1);
            leftDiagonal[j - i + 7] = false;
            rightDiagonal[i + j] = false;
            placeColumns[j] = false;
        }
    }
}

int main() {
    for (auto &i: ChessBoard) {
        for (char &j: i)
            cin >> j;
    }

    solved(0);

    cout << ans;
    return 0;
}
