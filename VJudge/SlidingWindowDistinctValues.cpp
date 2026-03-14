//URL: https://vjudge.net/problem/CSES-3222

#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    map<int, int> counts;
    int distinct = 0;

    for (int i = 0; i < n; i++) {
        if (counts[a[i]] == 0) distinct++;
        counts[a[i]]++;

        if (i >= k) {
            int left_val = a[i - k];
            counts[left_val]--;
            if (counts[left_val] == 0) distinct--;
        }

        if (i >= k - 1) {
            cout << distinct << (i == n - 1 ? "" : " ");
        }
    }

    return 0;
}
