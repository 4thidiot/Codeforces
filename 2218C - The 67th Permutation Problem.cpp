#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int x = 1, y = n + 1;

        for (int i = 0; i < n; i++) {
            cout << x++ << " " << y++ << " " << y++ << " ";
        }

        cout << "\n";
    }

    return 0;
}