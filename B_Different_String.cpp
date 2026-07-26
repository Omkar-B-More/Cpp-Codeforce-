#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    string s;
    cin>>s;
    bool ok=false;
    for(int i=1;i<s.length();i++){
        if(s[i]!=s[i-1]){
            swap(s[i],s[i-1]);
            ok=true;
            break;
        }
    }
    if(!ok){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    cout<<s<<endl;
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