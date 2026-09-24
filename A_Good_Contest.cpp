#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n;
    cin>>n;
    int a[3];
    for(int i=0;i<3;i++){
        cin>>a[i];
    }
    int ans=0;
    for(int i=0;i<3;i++){
        if(a[i]!=n){
            ans=max(ans,(n-a[i]));
        }
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