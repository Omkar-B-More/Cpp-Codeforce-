#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    ll n;
    cin>>n;
    ll ans=n;
    for(ll i=0;i<n;i++){
        ans+=i*(n-i);
    }
    
    cout<<ans;
}

int main() {
    fast_io;
    solve();
    return 0;
}