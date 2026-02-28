#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        int l = -1, r = -1, c = 0;
        
      
        for(int i = 0; i < n; i++) {
            if(a[i] == 1) {
                l = i;
                break;
            }
        }
        
   
        for(int i = n - 1; i >= 0; i--) {
            if(a[i] == 1) {
                r = i;
                break;
            }
        }
        
      
        for(int i = 0; i < n; i++) {
            if(a[i] == 1) {
                c++;
            }
        }
        
        cout << (r - l - c + 1) << endl;
    }
    
    return 0;
}
