#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, d;
        cin >> n >> m >> d;

        int k = 1 + d / m;
        cout << (n + k - 1) / k << '\n';
    }

    return 0;
}
