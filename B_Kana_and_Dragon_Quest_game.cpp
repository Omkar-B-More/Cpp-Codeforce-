#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
        int x,n,m;
        cin>>x>>n>>m;
        while(n--){
            int temp=(x/2)+10;
            if(x<=temp) break;
            x=temp;
        }
        if(x<=m*10){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
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