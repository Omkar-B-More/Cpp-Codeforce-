#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n;cin>>n;
    string s;
    cin>>s;
    int cnt=1,ans=1;
    for(int i=1;i<s.length();i++){
        if(s[i]!=s[i-1]){
            cnt=1;
        }
        else cnt++;
        ans=max(ans,cnt);
    }
    cout<<ans+1<<endl;
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