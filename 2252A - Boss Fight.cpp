#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        map<int, int> freq;
        long long sum = 0;

        int val = 0, mx = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            sum += x;
            freq[x]++;
            if (freq[x] > mx) {
                mx = freq[x];
                val = x;
            }
        }

        int others = n - mx;

        if (mx <= others + 1) {
            cout << sum << '\n';
        } else {
            long long otherSum = sum - 1LL * mx * val;
            cout << otherSum + 1LL * (others + 2) * val << '\n';
        }
    }

    return 0;
}