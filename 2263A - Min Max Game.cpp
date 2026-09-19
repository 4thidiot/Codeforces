#include <bits/stdc++.h>
using namespace std;

void tc() {
    int n; cin >> n;
    int cnt = 0;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        cnt += a[i];
    }
    if(cnt >= n - cnt) {
        cout << "Bessie\n";
    } else {
        cout << "Elsie\n";
    }
}

int main() {
    int t; cin >> t;
    while(t--) tc();
}