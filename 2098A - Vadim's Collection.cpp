#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<int> cnt(10, 0);

    for (char c : s)
        cnt[c - '0']++;

    string ans;

    for (int i = 1; i <= 10; i++) {
        int need = 10 - i;

        for (int d = need; d <= 9; d++) {
            if (cnt[d] > 0) {
                ans += char('0' + d);
                cnt[d]--;
                break;
            }
        }
    }

    cout << ans << '\n';

    return 0;
}