#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    ll n,b,c,s,temp=0;
    cin>>n>>b>>c>>s;
    for(int i=0;i<n;i++){
        ll int val;
        cin>>val;
        b-=min((val-temp)*c,s);
        temp=val;
    }
    cout<<(b>0?"YES":"NO")<<endl;
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