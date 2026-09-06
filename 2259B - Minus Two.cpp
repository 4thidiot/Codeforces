#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    unordered_map<long long, int> counts;
    
    int odd_count = 0;
    int even_t_even = 0;
    int even_t_odd = 0;
    int max_orig = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        counts[a[i]]++;
        max_orig = max(max_orig, counts[a[i]]);
        
        if (a[i] % 2 != 0) {
            odd_count++;
        } else {
            long long t_val = a[i] / 2;
            if (t_val % 2 == 0) {
                even_t_even++;
            } else {
                even_t_odd++;
            }
        }
    }
    
    int ans = max({max_orig, odd_count, even_t_even, even_t_odd});
    cout << ans << "\n";
}

int main() {
    // Optimize standard input/output streams for speed
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
