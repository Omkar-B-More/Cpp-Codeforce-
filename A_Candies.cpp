#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n,x;
    cin>>n;
    for(int k=2;k<=30;k++){
        int de=pow(2,k)-1;
        if(n%de){
            continue;
        }
        x=n/de;
        break;
    }
    cout<<x<<"\n";
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