#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    ll a,b,col=b-1;
    cin>>a>>b;
    int ti=(a-b)+1;
    int pehla=pow(2,ti),dusra=2;
    cout<<pehla+(a-ti)*dusra<<endl;
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