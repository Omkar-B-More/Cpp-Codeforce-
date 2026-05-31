#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {
    fast_io;

    int t;
    cin >> t;

    while (t--) {
        ll x, y, a, b;
        cin >> x >> y >> a >> b;

        ll ans = min((x + y) * a, min(x, y) * b + (max(x, y) - min(x, y)) * a);

        cout << ans << '\n';
    }

    return 0;
}