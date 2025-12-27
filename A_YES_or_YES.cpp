#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    string s,f="Y",d="N";
    cin>>s;
    for(int i=0;i<s.length();i++){
       if(s.length()>2){
        if(s[i]||s[i+1]=='Y'){
            s.erase(i,i+1);
            s.insert(i,f);
        }
        if(s[i]&&s[i+1]=='N'){
            s.erase(i,i+1);
            s.insert(i,d);
        }
       }
        if(s[i]&&s[i+1]=='Y'){
            cout<<"NO\n";
            break;
        }
        else{
            cout<<"YES\n";
            break;
        }
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