#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n, k;
    cin >> n >> k;

    vector<ll> a(n);
    ll total = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total += a[i];
    }

    sort(a.begin(), a.end());

    vector<ll> pre(n + 1, 0);
    for (int i = 0; i < n; i++) {
        pre[i + 1] = pre[i] + a[i];
    }

    ll ans = 0;

    for (int x = 0; x <= k; x++) {
        ll left = pre[2 * x];
        ll right = pre[n] - pre[n - (k - x)];
        ans = max(ans, total - left - right);
    }

    cout << ans << '\n';
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