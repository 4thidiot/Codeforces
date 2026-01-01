#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        bool ans = true;

        for(int i = 0; i < n; i++)
        {
            if((i == 0 || s[i] != s[i-1]) && (i == n-1 || s[i] != s[i+1]))
            {
                ans = false;
                break;
            }
        }

        cout << (ans ? "YES\n" : "NO\n");
    }
    return 0;
}