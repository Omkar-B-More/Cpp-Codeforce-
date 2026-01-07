#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    string s;
    int c=0,d=0;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='A'){
            c++;
        }
        else{
            d++;
        }
    }
    if(c<d){
        cout<<"B\n";
    }
    else{
        cout<<"A\n";
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