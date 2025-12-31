#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << (count(s.begin(), s.end(), '1') == n ? "NO\n" : "YES\n");
    }
    return 0;
}