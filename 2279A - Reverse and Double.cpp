#include <bits/stdc++.h>
using namespace std;
 
template <class T, T (*f)(T, T), T (*unit)()> struct Seg {
	vector<T> s; int n;
	Seg(int n = 0, T def = unit()) : s(2*n, def), n(n) {}
	void update(int pos, T val) {
		for (s[pos += n] = val; pos /= 2;)
			s[pos] = f(s[pos * 2], s[pos * 2 + 1]);
	}
	T query(int b, int e) { // query [b, e)
		T ra = unit(), rb = unit();
		for (b += n, e += n; b < e; b /= 2, e /= 2) {
			if (b % 2) ra = f(ra, s[b++]);
			if (e % 2) rb = f(s[--e], rb);
		}
		return f(ra, rb);
	}
 
	T get(int x) { return s[x+n]; }
};
 
using T = int;
T f(T a, T b) { return max(a, b); }
T unit() { return 0; }
 
int main() {
    cin.tie(0)->sync_with_stdio(0);
 
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
 
        Seg<T, f, unit> rmq(n - 1);
        vector<int> mx;
        int val = -1;
        for (int i = 0; i < n - 1; i++) {
            rmq.update(i, abs(a[i + 1] - a[i]));
            if (abs(a[i + 1] - a[i]) > val)
                mx = {i}, val = abs(a[i + 1] - a[i]);
            else if (abs(a[i + 1] - a[i]) == val)
                mx.push_back(i);
        }
 
        if (mx.size() >= 3) {
            cout << val << "\n";
            continue;
        }
 
        auto calc = [&](int i, int j) {
            int v2 = 2 * rmq.query(i, j);
            if (i > 0) v2 = max({v2, rmq.query(0, i - 1), abs(a[i - 1] - 2 * a[j])});
            if (j < n - 1) v2 = max({v2, rmq.query(j + 1, n - 1), abs(a[j + 1] - 2 * a[i])});
            return v2;
        };
 
        if (mx.size() == 2) {
            int i = mx[0], j = mx[1];
            cout << min(val, calc(i + 1, j)) << "\n";
            continue;
        }
 
        int i = mx[0];
        for (int j = 0; j <= i; j++) {
            val = min(val, calc(j, i));
        }
        for (int j = i + 1; j < n; j++) {
            val = min(val, calc(i + 1, j));
        }
 
        cout << val << "\n";
    }
}