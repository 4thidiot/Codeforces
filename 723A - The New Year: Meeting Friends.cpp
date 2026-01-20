#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> x(3);
    for (int i = 0; i < 3; i++) cin >> x[i];

    sort(x.begin(), x.end());

    int meet = x[1]; 
    int ans = abs(x[0] - meet) + abs(x[1] - meet) + abs(x[2] - meet);

    cout << ans << '\n';
    return 0;
}