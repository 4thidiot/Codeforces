#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, r;
    cin >> k >> r;

    for(int n = 1; n <= 10; n++)
    {
        int last = (n * k) % 10;

        if(last == 0 || last == r)
        {
            cout << n;
            return 0;
        }
    }
}