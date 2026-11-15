#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        if (n < 4) {
            cout << -1 << '\n';
            continue;
        }

        vector<int> p(n);

        for (int i = 0; i < n; i++)
            p[i] = i + 1;

        swap(p[0], p[3]);

        for (int x : p)
            cout << x << ' ';
        cout << '\n';
    }

    return 0;
}