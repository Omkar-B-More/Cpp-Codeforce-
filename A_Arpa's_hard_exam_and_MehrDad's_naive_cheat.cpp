#include <bits/stdc++.h>
using namespace std;

#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long

void solve()
{
    int n;
    cin >> n;
    if (n == 0)
    {
        cout << 1;
    }
    else if (n % 4 == 0)
    {
        cout << 6;
    }
    else if (n % 4 == 1)
    {
        cout << 8;
    }
    else if (n % 4 == 2)
    {
        cout << 4;
    }
    else if (n % 4 == 3)
    {
        cout << 2;
    }
}

int main()
{
    fast_io;
    solve();
    return 0;
}