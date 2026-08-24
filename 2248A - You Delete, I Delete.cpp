#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        string ans = "";

        for (int i = 0; i < s.size(); i++) {
            if (s[i] != '0')
                continue;

            string a = s;
            a.erase(i, 1);

            string best = "";

            for (int j = 0; j < a.size(); j++) {
                if (a[j] != '1')
                    continue;

                string b = a;
                b.erase(j, 1);

                if (best == "" || b < best)
                    best = b;
            }

            if (ans == "" || best > ans)
                ans = best;
        }

        cout << ans << '\n';
    }
}