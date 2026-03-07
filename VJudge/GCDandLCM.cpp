//URL: https://vjudge.net/contest/794807#problem/D

#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b;

    while (cin >> a >> b) {
        int g = __gcd(a, b);
        int l = (a / g) * b;

        cout << g << " " << l << endl;
    }
    return 0;
}
