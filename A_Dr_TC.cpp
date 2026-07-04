#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n;
    cin>>n;
    string a;
    int ans=0;
    cin>>a;
    for(int i=0;i<n;i++){
            if(a[i]=='1'){
                ans+=n-1;
            }
            else {
                ans+=1;
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