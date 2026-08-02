#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n, f, k;
    cin >> n >> f >> k;

    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int temp = a[f - 1];

    int greater = 0, greaterEqual = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] > temp)
            greater++;
        if (a[i] >= temp)
            greaterEqual++;
    }

    if (greater >= k)
        cout << "NO\n";
    else if (greaterEqual <= k)
        cout << "YES\n";
    else
        cout << "MAYBE\n";
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