#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int k,n;
    cin>>k>>n;
    if(k<n){
        cout<<n-k<<endl;
    }
    else{
        cout<<(k+n)%2<<endl;
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