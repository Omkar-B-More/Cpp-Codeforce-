#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    ll n,b,d,sum=0,ans=0;
    cin>>n>>b>>d;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]>b){
            continue;
        }
        else {
            sum+=a[i];
            if(sum>d){
                ans++;
                sum=0;
            }
        }
    }
    cout<<ans<<endl;
}

int main() {
    fast_io;
    solve();
    return 0;
}