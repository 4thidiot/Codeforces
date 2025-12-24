#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    int ans = 0;

    for (int i = 0; i < n; i += 2) {
        if (s[i] == s[i + 1]) {
            s[i] = (s[i] == 'a' ? 'b' : 'a');
            ans++;
        }
    }

    cout << ans << "\n";
    cout << s << "\n";
    return 0;
}
