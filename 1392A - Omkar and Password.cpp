#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        long long first, x;
        cin >> first;

        bool diff = false;
        for (int i = 1; i < n; i++) {
            cin >> x;
            if (x != first) diff = true;
        }

        cout << (diff ? 1 : n) << '\n';
    }
    return 0;
}
