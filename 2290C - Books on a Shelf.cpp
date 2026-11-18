#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int tc = 0; tc < t; tc++) {
        int n;
        cin >> n;
        vector<int> h(n);
        for (int& x : h)
            cin >> x;
        sort(h.begin(), h.end());
        int k = 0;
        for (int i = 0; i < n; i++)
            k += i < 2 || h[i] != h[i - 2];
        cout << k << endl;
        for (int i = 0; i < n; i++)
            if (i == 0 || h[i] != h[i - 1])
                cout << h[i] << " ";
        for (int i = n - 1; i > 0; i -= 1)
            if (h[i] == h[i - 1])
                cout << h[i] << " ";
        cout << endl;
    }
}
