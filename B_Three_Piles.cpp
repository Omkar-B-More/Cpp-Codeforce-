#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    ll int a,b,c;
    cin>>a>>b>>c;
    if((a+c)>b){
        cout<<(c+a)-b<<endl;
    }
    else{
        cout<<abs(a-b)<<endl;
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