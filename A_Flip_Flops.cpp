#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    ll n,c,k;
    cin>>n>>c>>k;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(ll i=n-1;i<0;i--){
        if(a[i]<c){
            a[i]+=c-a[i];
            k--;
        }
        else{
            c+=a[i];
        }
    }
    cout<<c<<endl;

    
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