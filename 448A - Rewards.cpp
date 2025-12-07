#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a1, a2, a3;
    int b1, b2, b3;
    int n;

    cin >> a1 >> a2 >> a3;
    cin >> b1 >> b2 >> b3;
    cin >> n;

    int cups = a1 + a2 + a3;
    int medals = b1 + b2 + b3;

    int shelves_cups = (cups + 4) / 5;
    int shelves_medals = (medals + 9) / 10;

    if (shelves_cups + shelves_medals <= n)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
