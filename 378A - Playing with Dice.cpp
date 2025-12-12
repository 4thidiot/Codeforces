#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int x = 0;
    int y = 0;
    int z = 0;

    for (int i = 1; i <= 6; i++)
    {
        int d1 = abs(a - i);
        int d2 = abs(b - i);

        if (d1 < d2)
        {
            x++;
        }
        else if (d1 == d2)
        {
            y++;
        }
        else
        {
            z++;
        }
    }

    cout << x << " " << y << " " << z << "\n";
}
