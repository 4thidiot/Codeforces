
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<int> v(n * m);
        for (int i = 0; i < n * m; i++) {
            cin >> v[i];
        }

        if (n * m == 1) {
            cout << -1 << '\n';
            continue;
        }

        rotate(v.begin(), v.begin() + 1, v.end());

        int idx = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << v[idx++] << " ";
            }
            cout << '\n';
        }
    }
    return 0;
}
