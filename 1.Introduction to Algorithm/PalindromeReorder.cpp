//Author: Nguyen Huu Loc
//Problem: https://cses.fi/problemset/task/1755/
#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    int n = (int) s.length();

    //count each character
    int count['Z' + 1] = {};
    for (int i = 0; i < n; i++) {
        count[s[i]]++;
    }

    //get odd frequency characters
    int oddFrequency = 0;
    char oddCharacter;
    for (int i = 'A'; i <= 'Z'; i++) {
        if (count[i] % 2 != 0) {
            ++oddFrequency;
            oddCharacter = (char) i;
        }
    }

    //no solution case
    if ((oddFrequency == 1 && n % 2 == 0) || oddFrequency > 1) {
        cout << "NO SOLUTION";
        return 0;
    }

    string first, last;
    for (int i = 'A'; i <= 'Z'; i++) {
        int characterFrequency = count[i];
        for (int j = 0; j < characterFrequency / 2; j++) {
            first += (char) i;
            last += (char) i;
        }
    }
    reverse(last.begin(), last.end());
    cout << (oddFrequency == 1 ? first + oddCharacter + last : first + last);
    return 0;
}
