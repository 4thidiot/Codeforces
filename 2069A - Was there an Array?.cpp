#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s = "";

        for (int i = 0; i < n - 2; i++) {
            int x;
            cin >> x;
            s += char('0' + x);
        }

        if (s.find("101") != string::npos)
            cout << "NO\n";
        else
            cout << "YES\n";
    }

    return 0;
}