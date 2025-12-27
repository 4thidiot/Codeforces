#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        bool ok = true;
        for(int i = 1; i < (int)s.size(); i++)
        {
            if(s[i] - s[i-1] != 1)
            {
                ok = false;
                break;
            }
        }
        cout << (ok ? "Yes\n" : "No\n");
