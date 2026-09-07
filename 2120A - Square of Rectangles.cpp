#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int l1, b1, l2, b2, l3, b3;
        cin >> l1 >> b1 >> l2 >> b2 >> l3 >> b3;

        bool possible = false;

        // Case 1: All three rectangles placed side by side
        if (b1 == b2 && b2 == b3 &&
            l1 + l2 + l3 == b1) {
            possible = true;
        }

        // Case 2: Largest rectangle on top, other two below
        if (l1 == l2 + l3 &&
            b2 == b3 &&
            b1 + b2 == l1) {
            possible = true;
        }

        cout << (possible ? "YES" : "NO") << '\n';
    }

    return 0;
}
