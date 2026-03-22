#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string a, b, c;
        cin >> a >> b >> c;

        bool ok = false;

        for (int i = 0; i < n; i++) {
            if (a[i] != c[i] && b[i] != c[i]) {
                ok = true;
                break;
            }
        }

        if (ok) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}