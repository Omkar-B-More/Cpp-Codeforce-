#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    ll a,b,c,x,y;
    cin>>a>>b>>c>>x>>y;
    int ax=min(a,x);
    int by=min(b,y);
    a-=ax;
    x-=ax;
    b-=by;
    y-=by;
    if(c>=x+y){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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