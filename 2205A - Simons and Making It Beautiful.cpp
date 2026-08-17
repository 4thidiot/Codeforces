#include <bits/stdc++.h>
using namespace std;
int n, a[505];
 
void solve() {
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
        if (a[i] == n) swap(a[1], a[i]);
    }
    for(int i = 1; i <= n; i++) printf("%d ", a[i]); puts("");
}
 
int main() {
    int T;
    cin >> T;
    for (; T--; ) solve();
    return 0;
}
