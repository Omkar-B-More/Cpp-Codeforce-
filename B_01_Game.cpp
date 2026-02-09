#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    string s;
    cin>>s;
    int c=0,d=0;    
    for(int i=0;i<s.length();i++){
        if(s[i]=='0'){
            c++;
        }
        else{
            d++;
        }
    }
    if((min(c,d)%2)==1){
        cout<<"DA\n";
    }
    else{
        cout<<"NET\n";
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