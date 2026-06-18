#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

ll sum(ll x) {
    return x * (x + 1) / 2;
}

int main() {
    fast_io;

    int t;
    cin >> t;

    while (t--) {
        ll n, x, y;
        cin >> n >> x >> y;

        ll l = x / __gcd(x, y) * y;

        ll pos = n / x - n / l;
        ll neg = n / y - n / l;

        ll mx = sum(n) - sum(n - pos);
        ll mn = sum(neg);

        cout << mx - mn << '\n';
    }

    return 0;
}