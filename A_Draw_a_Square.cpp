#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int l,r,d,u;
    cin>>l>>r>>d>>u;
    if((l==r)&&(r==d)&&(d==u)&&(l==u)){
        cout<<"Yes\n";
    }
    else{
        cout<<"No\n";
    }
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