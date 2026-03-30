#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    ll x,n;cin>>x>>n;
    ll ans =x;
    if(x%2==0){
        if(n%4==1) ans-=n;
        else if(n%4==2)ans++;
        else if(n%4==3) ans+=n+1;

    }
    else{
        if(n%4==1) ans+=n;
        else if(n%4==2) ans--;
        else if(n%4==3) ans-=n+1;
    }
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