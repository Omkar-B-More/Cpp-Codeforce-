#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    string s;
    int ans=0;
    cin>>s;
    for(int i=1;i<s.length();i++){
        if(s[i-1]!='#'&&s[i+1]!='#'){
            ans+=2;
        }
        else{
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