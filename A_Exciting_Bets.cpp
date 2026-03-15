#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    ll a,b;
    cin>>a>>b;
    if(a==b){
        cout<<0<<" "<<0<<"\n";
    }
    else{
        ll x=abs(a-b);
        ll y=a%x;
        y=min(y,x-y);
        cout<<x<<" "<<y<<"\n";
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