#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        string s = "";

        for (int i = 0; i < n; i++) {
            string a;
            cin >> a;

            if (a + s < s + a)
                s = a + s;
            else
                s = s + a;
        }

        cout << s << '\n';
    }

    return 0;
}