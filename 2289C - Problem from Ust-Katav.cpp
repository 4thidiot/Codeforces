#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> p(n);
        for (int &x : p) cin >> x;

        vector<int> L(n), R(n);
        stack<int> st;

        // Nearest smaller element on the left
        for (int i = 0; i < n; i++) {
            while (!st.empty() && p[st.top()] > p[i])
                st.pop();

            if (st.empty())
                L[i] = i + 1;
            else
                L[i] = i - st.top();

            st.push(i);
        }

        while (!st.empty())
            st.pop();

        // Nearest smaller element on the right
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && p[st.top()] > p[i])
                st.pop();

            if (st.empty())
                R[i] = n - i;
            else
                R[i] = st.top() - i;

            st.push(i);
        }

        long long ans = 0;

        for (int i = 0; i < n; i++) {
            if (L[i] == 1 || R[i] == 1)
                ans += max(L[i], R[i]);
            else
                ans += 2;
        }

        cout << ans << '\n';
    }

    return 0;
}