#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        bool ok = false;

        for (int i = 0; i < n && !ok; i++) {
            for (int j = i + 1; j < n; j++) {
                if ((a[j] % a[i]) % 2 == 0) {
                    cout << a[i] << " " << a[j] << '\n';
                    ok = true;
                    break;
                }
            }
        }

        if (!ok)
            cout << -1 << '\n';
    }

    return 0;
}