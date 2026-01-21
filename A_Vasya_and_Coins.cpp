#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int a,b;
    cin>>a>>b;
    int o=a,t=2*b;
    if(o==0){
        cout<<1<<"\n";
    }
    else{
        cout<<o+t+1<<"\n";
    }
}

int main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}