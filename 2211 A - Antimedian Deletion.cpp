#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int &x : a) cin >> x;

    if (n == 1) {
        cout << "1\n";
    } else {
        for (int i = 0; i < n; i++) {
            cout << "2 ";
        }
        cout << "\n";
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}