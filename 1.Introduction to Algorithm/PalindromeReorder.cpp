#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    int n = (int)s.length();

    //count each character
    int count[128] = {};
    for (int i = 0; i < n; i++) {
        count[s[i]]++;
    }

    //get odd frequency characters
    int oddFrequency = 0;
    char oddCharacter;
    for (int i = 0; i < 128; i++) {
        if (count[i] % 2 != 0) {
            ++oddFrequency;
            oddCharacter = (char)i;
        }
    }

    //no solution case
    if ((oddFrequency == 1 && n % 2 == 0) || oddFrequency > 1) {
        cout << "NO SOLUTION";
        return 0;
    }

    string first, last;
    for (int i = 0; i < 128; i++) {
        char character = (char)i;
        int characterFrequency = count[i];
        string ss;
        for (int j = 0; j < characterFrequency / 2; j++) {
            ss += character;
        }
        first.append(ss);
        last.append(ss);
    }
    reverse(last.begin(), last.end());
    cout << (oddFrequency == 1 ? first + oddCharacter + last : first + last);
    return 0;
}
