#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int a[3];
    ll ans=1;
    for(int i=0;i<3;i++){
        cin>>a[i];
    }
    for(int i=0;i<5;i++){
        sort(a,a+3);
        a[0]+=1;
    }
    for(int i=0;i<3;i++){
        ans*=a[i];
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