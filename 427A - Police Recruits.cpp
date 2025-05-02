#include <iostream>
using namespace std;

int main()
{
    int n, e;
    int police = 0, crime = 0;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> e;
        if(e == -1)
        {
            if(police > 0)
                police--;
            else
                crime++;
        }
        else
            police += e;
    }

    cout << crime << endl;
    return 0;
}
