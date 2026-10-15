#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int ans = 1;

        // 010 or 101 -> can decrease number of blocks by 2
        if (s.find("010") != string::npos ||
            s.find("101") != string::npos)
            ans++;

        // 000 or 111 -> can increase number of blocks by 2
        if (s.find("000") != string::npos ||
            s.find("111") != string::npos)
            ans++;

        cout << ans << '\n';
    }

    return 0;
}