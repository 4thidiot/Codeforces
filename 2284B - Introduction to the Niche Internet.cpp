#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int &x : a) cin >> x;

        sort(a.begin(), a.end());

        int cnt = count(a.begin(), a.end(), a[n - 1]);

        if (cnt > k) {
            cout << "NO\n";
            continue;
        }

        vector<int> c(a.begin() + n - k, a.end());
        vector<int> b(a.begin(), a.begin() + n - k);

        reverse(b.begin(), b.end());

        cout << "YES\n";

        for (int x : c) cout << x << " ";
        for (int x : b) cout << x << " ";
        cout << "\n";
    }

    return 0;
}