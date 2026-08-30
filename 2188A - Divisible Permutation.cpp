#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<int> p = {1, n};
        set<int> used = {1, n};

        for(int i = n - 2; i >= 1; i--)
        {
            int prev = p.back();

            if(1 <= prev - i && prev - i <= n && !used.count(prev - i))
            {
                p.push_back(prev - i);
                used.insert(prev - i);
            }
            else
            {
                p.push_back(prev + i);
                used.insert(prev + i);
            }
        }

        reverse(p.begin(), p.end());

        for(int x : p)
            cout << x << " ";

        cout << '\n';
    }

    return 0;
}