#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n,ans=INT_MAX;
    string s;
    cin>>s;
    n=s.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int no=s[i]-'0';
            no=no*10+s[j]-'0';
            if(no%25==0){
                ans=min(ans,j-i-1+n-j-1);
            }
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