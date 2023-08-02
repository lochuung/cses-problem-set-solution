#include "bits/stdc++.h"

using namespace std;

int x[] = {0, 0, -1, 1};
int y[] = {1, -1, 0, 0};
//0: R, 1:L, 2:U, 3: D

const int PATH_LEN = 48;
int path[PATH_LEN];
bool onPath[9][9];

int solve(int pathIndex, int i, int j) {
    if ((onPath[i][j - 1] && onPath[i][j + 1]) &&
        (!onPath[i - 1][j] && !onPath[i + 1][j]))
        return 0;
    if ((onPath[i - 1][j] && onPath[i + 1][j]) &&
        (!onPath[i][j - 1] && !onPath[i][j + 1]))
        return 0;
    if (i == 7 && j == 1) {
        if (pathIndex == PATH_LEN) return 1;
        return 0;
    }
    if (pathIndex == PATH_LEN) return 0;

    onPath[i][j] = true;

    int res = 0;

    if (path[pathIndex] < 4) {
        int next_i = i + x[path[pathIndex]];
        int next_j = j + y[path[pathIndex]];

        if (!onPath[next_i][next_j]) res += solve(pathIndex + 1, next_i, next_j);
    } else {
        for (int e = 0; e < 4; e++) {
            int next_i = i + x[e];
            int next_j = j + y[e];

            if (!onPath[next_i][next_j]) res += solve(pathIndex + 1, next_i, next_j);
        }
    }
    onPath[i][j] = false;

    return res;
}

void init() {
    string s;
    getline(cin, s);

    for (int i = 0; i < s.length(); i++) {
        //0: R, 1:L, 2:U, 3: D
        char c = s[i];
        if (c == 'R') path[i] = 0;
        else if (c == 'L') path[i] = 1;
        else if (c == 'U') path[i] = 2;
        else if (c == 'D') path[i] = 3;
        else path[i] = 4;
    }

    memset(onPath, false, sizeof onPath);
    for (int i = 0; i < 9; i++) {
        onPath[0][i] = true;
        onPath[i][0] = true;
        onPath[8][i] = true;
        onPath[i][8] = true;
    }
}

int main() {
    init();
    int ans = solve(0, 1, 1);
    cout << ans;
    return 0;
}
