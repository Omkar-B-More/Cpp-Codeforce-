#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int l,r,x;
    cin>>l>>r>>x;
    int ans=r/x + r%x;
    int m=r/x*x - 1;
    if(m >= l) {ans=max(ans,m/x + m%x);}
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