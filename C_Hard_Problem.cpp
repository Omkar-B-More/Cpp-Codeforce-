#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int m,a,b,c;
    cin>>m>>a>>b>>c;
    int ans=0,space=0;
    ans+=min(m,a);space+=m-min(m,a);
    ans+=min(m,b);space+=m-min(m,b);
    ans+=min(space,c);
    cout<<ans<<endl;

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