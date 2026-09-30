#include <bits/stdc++.h>
using namespace std;

struct BIT {
    int n;
    vector<int> bit;

    BIT(int n) {
        this->n = n;
        bit.assign(n + 1, 0);
    }

    void add(int i, int x) {
        for (; i <= n; i += i & -i)
            bit[i] += x;
    }

    // Returns index of the k-th 1
    int kth(int k) {
        int pos = 0;

        for (int pw = 1 << (31 - __builtin_clz(n)); pw; pw >>= 1) {
            int nxt = pos + pw;

            if (nxt <= n && bit[nxt] < k) {
                pos = nxt;
                k -= bit[nxt];
            }
        }

        return pos + 1;
    }
};

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<long long> a(n + 1);

        BIT bt(n);

        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            bt.add(i, 1);
        }

        long long ans = 0;
        int m = n;

        while (m >= k) {
            // k-th element from left
            int x = bt.kth(k);

            // k-th element from right
            // = (m-k+1)-th from left
            int y = bt.kth(m - k + 1);

            if (a[x] >= a[y]) {
                ans += a[x];
                bt.add(x, -1);
            } else {
                ans += a[y];
                bt.add(y, -1);
            }

            m--;
        }

        cout << ans << '\n';
    }

    return 0;
}