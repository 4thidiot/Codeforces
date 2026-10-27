#include <bits/stdc++.h>
using namespace std;

int main () {
  int T;
  cin >> T;
  while (T--) {
    int n;
    string s;
    cin >> n >> s;
    int c = count(s.begin(), s.end(), '1');
    if (c <= 2) {
      cout << c-1 << '\n';
      continue;
    }
    int l = s.find('1'), r = s.rfind('1');
    cout << r-l << '\n';
  }
}
