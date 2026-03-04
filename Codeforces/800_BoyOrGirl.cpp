// Problem: Boy or Girl
// URL: https://codeforces.com/problemset/problem/236/A
// Rating: 800

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    sort(s.begin(), s.end());

    int distinctCount = 1;  

    for (int i = 1; i < s.length(); i++) {
        if (s[i] != s[i - 1]) {
            distinctCount++;
        }
    }

    if (distinctCount % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";

    return 0;
}
