#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int t;
    if (scanf("%d", &t) != 1)
        return 0;
 
    string spell = "+";
    while ((int)spell.size() < 997)
        spell += "--+";
 
    while (t--) {
        int n;
        scanf("%d", &n);
 
        printf("%s\n", spell.c_str());
        fflush(stdout);
 
        int k;
        scanf("%d", &k);
 
        int y = (k == 0 ? 0 : (k + 2) / 3);
        printf("%d\n", n + y);
        fflush(stdout);
    }
    return 0;
}