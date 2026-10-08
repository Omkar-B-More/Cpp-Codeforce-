#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    ll n, k;
    cin >> n >> k;

    ll ans = k;
    ll even = 0;

    for(ll i=0;i<n;i++){
        ll x;
        cin >> x;

        ans = min(ans, (k - x % k) % k);

        if(x % 2 == 0)
            even++;
    }

    if(k == 4){
        ans = min(ans, max(0LL, 2 - even));
    }

    cout << ans << endl;
}

int main() {
    fast_io;

    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}