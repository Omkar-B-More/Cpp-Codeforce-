#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    int x = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        x ^= a[i];
    }

    if (x == 0)
        cout << 0 << '\n';
    else if (n % 2)
        cout << x << '\n';
    else
        cout << -1 << '\n';
}

int main() {
    fast_io;

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}