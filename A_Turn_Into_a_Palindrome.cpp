#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n,ans=0;
    char c;
    cin>>n>>c;
    string s;
    cin>>s;
    if(n==1){
        cout<<0<<endl;
        return;
    }
        for(int i=0;i<n/2;i++){
            if(((s[i]!=c)&&(s[n-i-1]==c)||(s[i]==c)&&(s[n-i-1]!=c))){
                ans++;
            }
            if((s[i]!=s[n-i-1])&&((s[i]!=c)&&(s[n-i-1]!=c))){
                ans+=2;
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