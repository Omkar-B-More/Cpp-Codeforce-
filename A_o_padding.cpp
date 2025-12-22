#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(s.length()!=n){
        s.append("o");
    }
    
        cout<<s;
    
}

int main() {
    // fast_io;
    // int t = 1;
    // cin >> t;
    // while (t--) {
    //     solve();
    // }
    solve();
    return 0;
}