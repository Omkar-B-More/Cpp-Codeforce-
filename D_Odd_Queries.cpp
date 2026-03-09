#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

long long n,q,t,a[200005],pref[200005];
void solve() {
    cin>>n>>q;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        pref[i]=pref[i-1]+a[i];
    }
    for(int i=0;i<q;i++){
        long long l,r,k;
        cin>>l>>r>>k;
        long long sum=pref[l-1]+(r-l+1)*k+pref[n]-pref[r];
        if(sum%2==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
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