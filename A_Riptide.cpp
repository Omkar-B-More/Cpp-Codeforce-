#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int v[3];
    for(int i=0;i<3;i++){
        cin>>v[i];
    }
    sort(v,v+3);
    cout<<min(v[1]-v[0],v[2]-v[1])<<endl;
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