#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, b;
    cin >> n >> b;

    vector<int> a(n);
    int sum = 0;

    for (int &x : a) {
        cin >> x;
        sum += x;
    }

    double x = (sum + b) * 1.0 / n;

    for (int i = 0; i < n; i++) {
        if (x < a[i]) {
            cout << -1;
            return 0;
        }
    }

    cout << fixed << setprecision(6);
    for (int i = 0; i < n; i++) {
        cout << x - a[i] << '\n';
    }
}
