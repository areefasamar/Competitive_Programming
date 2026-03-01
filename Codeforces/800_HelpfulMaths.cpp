// Problem: Helpful Maths
// URL: https://codeforces.com/contest/339/problem/A
// Rating: 800

#include<bits/stdc++.h>
using namespace std;
int main() {
    string str;
    if (!(cin >> str)) return 0;
    
    vector<int> digits;
    
    for (int i = 0; i < str.length(); i += 2) {
        int temp = str[i] - '0';
        digits.push_back(temp);
    }
    
    sort(digits.begin(), digits.end());
    
    for (int i = 0; i < digits.size(); i++) {
        if (i > 0) {
            cout << "+";
        }
        cout << digits[i];
    }
    // We can also add '+' but the, Risk: If size is 0, 0-1 underflows to a huge positive number, causing a crash.
    //if (i < (int)digits.size() - 1) { 
    //cout << "+";
}
    cout << endl;
    
    return 0;
}

//Can also be solved as:
// Array Frequency Method 

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     string s;
//     if (!(cin >> s)) return 0;

//     int count1 = 0, count2 = 0, count3 = 0;

//     for (int i = 0; i < s.length(); i += 2) {
//         if (s[i] == '1') count1++;
//         else if (s[i] == '2') count2++;
//         else if (s[i] == '3') count3++;
//     }

//     bool first = true;

//     for (int i = 0; i < count1; i++) {
//         if (!first) cout << "+";
//         cout << "1";
//         first = false;
//     }
//     for (int i = 0; i < count2; i++) {
//         if (!first) cout << "+";
//         cout << "2";
//         first = false;
//     }
//     for (int i = 0; i < count3; i++) {
//         if (!first) cout << "+";
//         cout << "3";
//         first = false;
//     }

//     cout << endl;

//     return 0;
// }
