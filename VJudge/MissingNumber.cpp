//URL: https://vjudge.net/contest/794807#problem/B

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;

    vector<int> vec(n-1);

    for(int i=0 ; i<n-1 ; i++){
        cin >> vec[i];
    }

    sort(vec.begin(), vec.end());

    for(int i=0 ; i<n-1 ; i++){
        if(vec[i] != i+1){
            cout << i+1 << endl;
            return 0;
        }
    }

    cout << n << endl;
    return 0;
}

//Alternative Solution
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;

//     int sum_input = 0;
//     for(int i = 0; i < n-1; i++) {
//         int x;
//         cin >> x;
//         sum_input += x;
//     }

//     int total = n * (n+1) / 2; 
//     cout << total - sum_input << endl;

//     return 0;
// }
