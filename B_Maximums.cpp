#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    ll n ,x=0;
    cin>>n; 
    for(int i=0;i<n;i++){
        int b;
        cin>>b;
        ll a=b+x;
        x=max(x,a);
        cout<<a<<" ";
    }
}

int main() {
    fast_io;
    solve();
    return 0;
}