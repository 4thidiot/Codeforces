#include <iostream>
using namespace std;

int dig_sum(int n) {
    int s = 0;
    while (n > 0) {
        s += n % 10;
        n /= 10;
    }
    return s;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, ans = 0;
        cin >> n;

        for (int i = n; i < n + 200; i++) {
            if (i - dig_sum(i) == n) {
                ans++;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}