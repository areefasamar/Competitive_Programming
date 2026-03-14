//URL: https://vjudge.net/problem/Aizu-NTL_1_E

#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;

    int x0 = 1, y0 = 0; 
    int x1 = 0, y1 = 1; 
    int aa = a, bb = b;

    while (bb != 0) {
        int q = aa / bb;
        int r = aa % bb;

        int x2 = x0 - q * x1;
        int y2 = y0 - q * y1;

        x0 = x1; 
		y0 = y1;
        x1 = x2; 
		y1 = y2;
        aa = bb; 
		bb = r;
    }

    cout << x0 << " " << y0 << endl;

    return 0;
}
