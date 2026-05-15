#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    for(int i=0;i<n;i++){
        if((a[i]=='R'&&b[i]!='R')||(a[i]!='R'&&b[i]=='R')){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
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