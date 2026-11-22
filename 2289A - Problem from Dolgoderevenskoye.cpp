#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long x;
        cin >> x;

        if (x % 2 == 0 && x % 4 != 0)
            cout << "No\n";
        else
            cout << "Yes\n";
    }

    return 0;
}