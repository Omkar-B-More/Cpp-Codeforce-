#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int ans=0,n,a,b;
    cin>>n;
    while(n--){
        cin>>a>>b;
        if(a>b){
            ans++;
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