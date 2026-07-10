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

        int total13 = 0;
        for(char c : s)
            if(c == '1' || c == '3')
                total13++;

        int rem13 = total13;
        int pref2 = 0;
        int best = rem13;

        for(char c : s)
        {
            if(c == '1' || c == '3')
                rem13--;
            else if(c == '2')
                pref2++;

            best = max(best, pref2 + rem13);
        }

        cout << n - best << "\n";
    }

    return 0;
}
