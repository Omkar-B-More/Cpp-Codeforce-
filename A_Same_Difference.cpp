#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n,ans=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n-1;i++){
        if(s[i]!=s[n-1]){
            ans++;
        }
    }
    cout<<ans<<"\n";
    
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