#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    double l;
    cin >> n >> l;

    vector<double> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());

    double mx = max(a[0], l - a[n - 1]);

    for (int i = 1; i < n; i++)
        mx = max(mx, (a[i] - a[i - 1]) / 2.0);

    cout << fixed << setprecision(10) << mx;
}