#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int sf = 0, fs = 0;

    for (int i = 1; i < n; i++) {
        if (s[i-1] == 'S' && s[i] == 'F') sf++;
        if (s[i-1] == 'F' && s[i] == 'S') fs++;
    }

    cout << (sf > fs ? "YES" : "NO");
    return 0;
}
