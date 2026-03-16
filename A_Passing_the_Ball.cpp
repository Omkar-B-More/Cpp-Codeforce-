#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n;
    cin>>n;
    string s;
    int ans=0;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]='R'){
            i+1;
        }
        else{
            i-1;
        }
        cout<<i<<endl;
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