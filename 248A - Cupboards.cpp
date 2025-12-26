#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int openL = 0, openR = 0;

    for (int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;
        openL += l;
        openR += r;
    }

    cout << min(openL, n - openL) + min(openR, n - openR) << '\n';
    return 0;
}
