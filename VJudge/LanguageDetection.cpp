//URL: https://vjudge.net/problem/UVA-12250

#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    int caseNum = 1;

    while (cin >> s && s != "#") {
        cout << "Case " << caseNum++ << ": ";

        if (s == "HELLO") cout << "ENGLISH" << endl;
        else if (s == "HOLA") cout << "SPANISH" << endl;
        else if (s == "HALLO") cout << "GERMAN" << endl;
        else if (s == "BONJOUR") cout << "FRENCH" << endl;
        else if (s == "CIAO") cout << "ITALIAN" << endl;
        else if (s == "ZDRAVSTVUJTE") cout << "RUSSIAN" << endl;
        else cout << "UNKNOWN" << endl;
    }

    return 0;
}
