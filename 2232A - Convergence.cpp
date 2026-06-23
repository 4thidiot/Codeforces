#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        sort(a.begin(), a.end());

        long long med = a[n / 2];

        int L = lower_bound(a.begin(), a.end(), med) - a.begin();
        int R = a.end() - upper_bound(a.begin(), a.end(), med);

        cout << max(L, R) << "\n";
    }

    return 0;
}