#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n, total = 0, count = 0;
    cin >> n;

    vector<int> a(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] == 2)
            count++;
    }

    if(count % 2) {
        cout << -1 << endl;
        return;
    }

    for(int i = 0; i < n; i++) {
        if(a[i] == 2)
            total++;

        if(total == count / 2) {
            cout << i + 1 << endl;
            return;
        }
    }
}

int main() {
    fast_io;

    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}