#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        long long n, ans = 0;
        cin >> n;

        while (n > 2) {
            ans += n / 3;
            n = (n + 2) / 3; // ceil(n/3)
        }

        cout << ans << '\n';
    }

    return 0;
}