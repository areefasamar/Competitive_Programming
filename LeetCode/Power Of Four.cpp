#include <iostream>
using namespace std;

bool isPowerOfFour(int n) {
    if(n <= 0) return false;

    while(n % 4 == 0) {
        n = n / 4;
    }

    return n == 1;
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    if(isPowerOfFour(n))
        cout << "True";
    else
        cout << "False";

    return 0;
}
