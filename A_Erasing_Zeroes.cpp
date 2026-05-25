#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int f=0,l=0;
    string s;
    cin>>s;
    int ans=0;
    for(int i=1;i<s.length();i++){
        if(f==0&&s[i]=='1'){
            f=i;
        }
        else if(f!=0&&s[i]=='1'){
            l=i;
        }
    }
    if(f==0&&l==0){
        cout<<ans<<endl;
        return;
    }
    for(int i=f;i<=l;i++){
        if(s[i]=='0'){
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