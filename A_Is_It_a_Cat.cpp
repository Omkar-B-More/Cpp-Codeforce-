#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(char &c : s){
        c=tolower(c);
    }
    string temp;
    temp+=s[0];
    
    for(int i=1;i<n;i++){
        if(s[i]!=s[i-1]){
            temp+=s[i];
        }
    }
    if(temp=="meow"){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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