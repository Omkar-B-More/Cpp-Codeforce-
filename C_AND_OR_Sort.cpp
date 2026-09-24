#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n;
    cin>>n;
    int s[n],ans=0;
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    for(int i=1;i<n;i++){
        if(s[i]<s[i-1]){
            s[i]+=1;
            ans++;
        }
        // else{

        // }
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