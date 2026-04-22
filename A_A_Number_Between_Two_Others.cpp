#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    long long int x,y;
    cin>>x>>y;
    for(long long int i=x;i<y;i+=x){
        long long int z=0;
        z=i;
        if((z%x==0)&&(y%z!=0)){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
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