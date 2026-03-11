#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n, ans = INT_MAX;
    cin >> n;

    while (n--) {
        int a[2];
        for (int i = 0; i < 2; i++) {
            cin >> a[i];
        }

        int val = a[0] + (a[1] - 1) / 2;
        ans = min(ans, val);
    }

    cout << ans << "\n";
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