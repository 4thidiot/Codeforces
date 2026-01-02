#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    vector<int> cnt(n, 0);

    while (m--) {
        int k;
        cin >> k;
        while (k--) {
            int y;
            cin >> y;
            cnt[y - 1]++;
        }
    }

    for (int x : cnt) {
        if (x == 0) {
            cout << "NO\n";
            return 0;
        }
    }

    cout << "YES\n";
    return 0;
}