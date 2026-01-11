#include <bits/stdc++.h>
using namespace std;

#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    int ma = max(0ll, max(b, c)-a+1);
    int mb = max(0ll, max(a, c)-b+1);
    int mc = max(0ll, max(b, a)-c+1);

    cout << ma << " " << mb << " " << mc << "\n";
}

int main()
{
    fast_io;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}