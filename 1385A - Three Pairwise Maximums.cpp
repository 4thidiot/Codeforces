#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<int> a(3);
        for (auto &x : a) cin >> x;

        sort(a.begin(), a.end());

        if (a[1] != a[2]) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
            cout << a[0] << " " << a[0] << " " << a[2] << "\n";
        }
    }
    return 0;
}