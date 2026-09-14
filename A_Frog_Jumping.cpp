#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    ll a, b, k, ans = 0;
    cin >> a >> b >> k;

    ans = ((k + 1) / 2) * a - (k / 2) * b;

    cout << ans << endl;
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