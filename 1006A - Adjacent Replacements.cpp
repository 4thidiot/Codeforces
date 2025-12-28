
#include <bits/stdc++.h>
using namespace std;

int main() {
#ifdef _DEBUG
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        cout << x - !(x & 1) << " ";
    }
    return 0;
}
