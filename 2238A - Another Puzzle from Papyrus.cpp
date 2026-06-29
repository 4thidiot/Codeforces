#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, c;
        cin >> n >> c;

        vector<int> a(n), b(n);
        long long sumA = 0, sumB = 0;

        bool noReorder = true;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sumA += a[i];
        }

        for (int i = 0; i < n; i++) {
            cin >> b[i];
            sumB += b[i];
            if (a[i] < b[i]) noReorder = false;
        }

        long long D = sumA - sumB;

        vector<int> sa = a, sb = b;
        sort(sa.begin(), sa.end());
        sort(sb.begin(), sb.end());

        bool reorderPossible = true;
        for (int i = 0; i < n; i++) {
            if (sa[i] < sb[i]) {
                reorderPossible = false;
                break;
            }
        }

        if (!reorderPossible)
            cout << -1 << '\n';
        else if (noReorder)
            cout << D << '\n';
        else
            cout << D + c << '\n';
    }

    return 0;
}