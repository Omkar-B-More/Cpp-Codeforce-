#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    string s;
    getline(cin>>ws,s);
    for(int i=0;i<s.length();i++){
        if(i==0||s[i-1]==' '){
            if(s[i]!=' '){
                cout<<s[i];
            }
        }
    }
    cout<<"\n";
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