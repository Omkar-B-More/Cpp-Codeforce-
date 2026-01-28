#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int a,b,c;
    string s;
    cin>>a>>b>>c;
    for(int i=0;i<c;i++){
        s+='a'+i;
    }
    for(int i=0;i<b-c;i++){
        s+=s[i];
    }
    for(int i=0;i<a-b;i++){
        s+=s[i];
    }
    cout<<s<<"\n";
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