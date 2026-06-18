#include <iostream>
using namespace std;

int main() {
    int a[3][3];

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }

    int b[3][3];

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            int cnt = a[i][j];

            if(i > 0) cnt += a[i - 1][j];
            if(i < 2) cnt += a[i + 1][j];
            if(j > 0) cnt += a[i][j - 1];
            if(j < 2) cnt += a[i][j + 1];

            if(cnt % 2 == 0)
                b[i][j] = 1;
            else
                b[i][j] = 0;
        }
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << b[i][j];
        }
        cout << endl;
    }

    return 0;
}
