#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n,k;cin>>n>>k;
    string s;cin>>s;
    map<char,int>m;
    for(int i=0;i<n;i++){
        m[s[i]]++;
    }
    int count =0;
    for(int i='a';i<='z';i++){
        if(m[i]%2) count++;
    }
    if(count>k+1) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
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