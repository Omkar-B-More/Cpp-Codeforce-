#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n;
    cin>>n;
    int pos = 0, neg = 0;

for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (x == 1) pos++;
    else neg++;
}

int ans = 0;

while (pos < neg) {
    pos++;
    neg--;
    ans++;
}

if (neg % 2) ans++;

cout << ans << '\n';
}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}