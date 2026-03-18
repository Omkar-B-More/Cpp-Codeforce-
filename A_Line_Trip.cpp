#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n,x;
    cin>>n>>x;
    int prev=0,ans=0;
    for(int i=0;i<n;i++){
        int a;cin>>a;
        ans=max(ans,a-prev);
        prev=a;
    }
    ans=max(ans,2*(x-prev));
    cout<<ans<<endl;
}

int main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}