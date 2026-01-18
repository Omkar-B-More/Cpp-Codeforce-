#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if((s[0]=='b'&&s[1]=='c'&&s[2]=='a')||(s[0]=='c'&&s[1]=='a'&&s[2]=='b')){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
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