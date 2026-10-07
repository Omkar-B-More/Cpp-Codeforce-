#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    set<int>e;
    e.insert(d-c);
    e.insert(c-b);
    e.insert(a+b);
    cout<<4-e.size()<<endl;
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