#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n, ans = 0;
    string a, b;

    cin >> n >> a >> b;

    for (int i = 0; i < n; i++) {
        int diff = abs(a[i] - b[i]);
        ans += min(diff, 10 - diff);
    }

    cout << ans;
}

int main() {
    fast_io;
    solve();
    return 0;
}