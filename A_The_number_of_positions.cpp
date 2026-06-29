#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n,a,b;
    cin>>n>>a>>b;
    cout<<n - max(a + 1, n - b) + 1<<endl;
}

int main() {
    fast_io;
    solve();
    return 0;
}