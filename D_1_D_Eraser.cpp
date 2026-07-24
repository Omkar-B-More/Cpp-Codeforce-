#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n,k,ans=0;
    cin>>n>>k;
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='B'){
            ans++;
            i+=k-1;
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