#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n,ans=0;
    cin>>n;
    if(n<10){
        ans=n;
        cout<<ans<<"\n";
    }
    else{
        ans=9;
        if(n<11){
            cout<<ans<<"\n";
        }
        else{
            int one=1;
        // for(int i=11;i<=n;i+=(10+one)){
        //     ans++;
        // }
        one++;
        for(int i=11;i<=n;i+=11){
            if(i%100){
                i+1;
            }
            ans++;

        }
        cout<<ans<<"\n";
    }
    }
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