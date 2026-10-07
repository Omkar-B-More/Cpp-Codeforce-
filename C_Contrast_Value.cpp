#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    ll n,sum=0;
    cin>>n;
    vector<ll>a(n);
    for(ll &x:a){
        cin>>x;
    }
    n=unique(a.begin(),a.end())-a.begin();
    ll ans=n;
    for(int i=0;i+2<n;++i){
        ans-=(a[i]<a[i+1]&&a[i+1]<a[i+2]);
        ans-=(a[i]>a[i+1]&&a[i+1]>a[i+2]);
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