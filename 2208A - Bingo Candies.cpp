#include <bits/stdc++.h>
using namespace std;

int main() {

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        unordered_map<int, int> freq;
        bool ok = true;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int x;
                cin >> x;
                freq[x]++;
            }
        }

        int limit = n * (n - 1);

        for (auto &p : freq) {
            if (p.second > limit) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }

    return 0;
}