#include <bits/stdc++.h>
using namespace std;

int dp[105][105];

int solve(int c1, int c2) {
    for (int i = 0; i <= c1; i++) {
        for (int j = 0; j <= c2; j++) {
            dp[i][j] = 0;

            if (i >= 1 && j >= 1)
                dp[i][j] = max(dp[i][j], dp[i - 1][j - 1] + 1);

            if (i >= 3)
                dp[i][j] = max(dp[i][j], dp[i - 3][j] + 1);

            if (j >= 3)
                dp[i][j] = max(dp[i][j], dp[i][j - 3] + 1);

            if (i >= 2 && j >= 2)
                dp[i][j] = max(dp[i][j], dp[i - 2][j - 2] + 1);
        }
    }

    return dp[c1][c2];
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int c0 = 0, c1 = 0, c2 = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x == 0) c0++;
            else if (x == 1) c1++;
            else c2++;
        }

        cout << c0 + solve(c1, c2) << "\n";
    }

    return 0;
}