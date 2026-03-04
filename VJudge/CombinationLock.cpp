//URL: https://vjudge.net/problem/UVA-10550

#include <iostream>
using namespace std;
int main() {
    int s, n1, n2, n3;

    while (cin >> s >> n1 >> n2 >> n3 && (s || n1 || n2 || n3)) {
        int total = 1080; 

        total += ((s - n1 + 40) % 40) * 9;
        total += ((n2 - n1 + 40) % 40) * 9;
        total += ((n2 - n3 + 40) % 40) * 9;

        cout << total << endl;
    }

    return 0;
}
