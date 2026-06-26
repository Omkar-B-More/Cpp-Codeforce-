#include <bits/stdc++.h>
using namespace std;

#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long

void solve()
{
    int n, temp, j = 1;
    cin >> n;
    vector<int> ans;
    if (n %2!=0)
    {
        cout << -1;
    }
    else
    {
        for (int i = 1; i <= n; i += 2)
        {
            temp = i;
            ans.push_back(j + 1);
            ans.push_back(temp);
            j += 2;
        }
        for (int i : ans)
        {
            cout << i << " ";
        }
    }
}

int main()
{
    fast_io;
    solve();
    return 0;
}