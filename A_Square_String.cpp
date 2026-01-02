#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    string a,b;
    cin>>a;
    b=a.substr(0,a.size()/2);
    if(b+b==a){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
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